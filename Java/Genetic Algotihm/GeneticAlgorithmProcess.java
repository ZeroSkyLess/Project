import java.util.Random;
import static java.lang.Math.abs;

public class GeneticAlgorithmProcess{
	private Chromosome newChromosome;
	private Chromosome parentChromosome;
	private Chromosome childrenChromosome;
	private Chromosome newChildrenChromosome;
	private Random rand;
	private int index;
	private int[] bestChromosome;
	private int budget;
	
	public GeneticAlgorithmProcess(Chromosome newChromosome, Chromosome parentChromosome, Chromosome childrenChromosome, int[] bestChromosome, int budget)
	{
		this.newChromosome = newChromosome;
		this.parentChromosome = parentChromosome;
		this.childrenChromosome = childrenChromosome;
		newChildrenChromosome = newChromosome;
		this.bestChromosome = bestChromosome;	
		rand = new Random();
		this.budget = budget;
		index = 0;
	}
	
	public void initialize()
	{
		int[][] chromosome = new int[newChromosome.getPopulation()][newChromosome.getGene()];
			
		int randInt;

		int numberOfFoods;
		int numberOfDrinks;
			
		for( int i = 0; i < newChromosome.getPopulation(); i++)
		{
			numberOfFoods = 0;
			numberOfDrinks = 0;
				
			while (numberOfFoods < 1 || numberOfDrinks < 1)
			{
				for (int j = 0; j < newChromosome.getGene(); j++)
				{
					randInt = rand.nextInt(10);
					chromosome[i][j] = randInt;
				}
				
				for (int j = 0; j < newChromosome.getGene(); j++)
				{
					if( j < 5)
						numberOfFoods = numberOfFoods + chromosome[i][j];
						
					else
						numberOfDrinks = numberOfDrinks + chromosome[i][j];
				}
			}
		}
			
		newChromosome.setChromosome(chromosome);
	}
	
	public void fitnessEvaluate()
	{
		fitnessEvaluate2(newChromosome);
	}
	
	public void fitnessEvaluate2(Chromosome chromo)
	{
		int accumulateWeight;
		int weight = 0;
		double fitness = 0;
		
		for(int i = 0; i < chromo.getPopulation(); i++)
		{
			accumulateWeight = 0;
			
			for(int j = 0; j < chromo.getGene(); j++)
			{
				weight = chromo.getChromosome(i,j) * chromo.getPrice(j);
				accumulateWeight  = accumulateWeight + weight;
			}
			
			fitness = (10000.0 / (10000.0 + abs(accumulateWeight - budget)));

			chromo.setFitnessValue(fitness,i);
		}
		//newChromosome.printFitnessValue();
	}
	
	public void parentSelection()
	{
		int randInt1 = 0;
		int randInt2 = 0;
		int [] winner = new int[2];
				
		do
		{
			for(int i = 0; i < 2; i++)
			{
				randInt1 = rand.nextInt(10);
				
				do
				{
					randInt2 = rand.nextInt(10);
				}while(randInt1 == randInt2);
				
				
				if(newChromosome.getFitnessValue(randInt1) > newChromosome.getFitnessValue(randInt2))
				{
					winner[i] = randInt1 + 1;
					
					for(int j = 0; j < parentChromosome.getGene(); j++)
					{
						parentChromosome.setChromosome(i,j,newChromosome.getChromosome(randInt1,j));
	
					}
				}
				
				else
				{
					winner[i] = randInt2 + 1;
					for(int j = 0; j < parentChromosome.getGene(); j++)
					{
						parentChromosome.setChromosome(i,j,newChromosome.getChromosome(randInt2,j));
					}
				}
			}
		}while(newChromosome.getFitnessValue(randInt1) == newChromosome.getFitnessValue(randInt2));	
		
		//System.out.println("Parent Selection");
		//System.out.println("Chromosome " + winner[0] + " has been chosen for parent chromosome");
		//System.out.println("Chromosome " + winner[1] + " has been chosen for parent chromosome");
		//parentChromosome.printChromosome();
	}
	
	public void crossOver(double xoverProbability)
	{
		double randDou = rand.nextDouble();
		
		childrenChromosome = parentChromosome;
		
		if( randDou < xoverProbability)
		{
			int randInt = rand.nextInt(childrenChromosome.getGene());
			//int ans = 0;
			
			//System.out.println("Crossover at " + (randInt + 1) + " bit");
			
			for(int i = randInt; i < childrenChromosome.getGene(); i++)
			{
				//ans = (childrenChromosome.getChromosome(0,i) + childrenChromosome.getChromosome(1,i))/ 2;
				//childrenChromosome.setChromosome(0,i,ans);
				//childrenChromosome.setChromosome(1,i,ans);
				
				childrenChromosome.setChromosome(0,i,parentChromosome.getChromosome(1,i));
				childrenChromosome.setChromosome(1,i,parentChromosome.getChromosome(0,i));
			}	
		}
		
		else
		{
			//System.out.println("No Crossover process occur");
		}
		
		//childrenChromosome.printChromosome();
	}
	
	public void mutation(double mutationProbability)
	{
		double randDou = rand.nextDouble();
		int randInt;
		int randInt2;
		
		
		if( randDou < mutationProbability)
		{
			for(int i = 0; i < 2; i ++)
			{
				randInt = rand.nextInt(childrenChromosome.getGene());
				randInt2 = rand.nextInt(10);
			
				//System.out.println("C" + (i+1) + "occur mutation at " + (randInt + 1) + " bit");
			
				childrenChromosome.setChromosome(i,randInt,randInt2);
			}
		}	
		
		else
		{
			//System.out.println("No Mutation process occur");
		}
		
		//childrenChromosome.printChromosome();
	}
	
	public void survivorSelection()
	{
		for(int i = 0; i < childrenChromosome.getPopulation(); i++)
		{
			for(int j = 0; j < childrenChromosome.getGene(); j++)
			{
				newChildrenChromosome.setChromosome(index,j,childrenChromosome.getChromosome(i,j));
			}
			index++;
		}
		
		//System.out.println("New Chromosome");
		//newChildrenChromosome.printChromosome(index);
		
		if(index == newChildrenChromosome.getPopulation())
		{
			index = 0;
			newChromosome = newChildrenChromosome;
		}
	}
	
	public double calculateAverage()
	{
		double total = 0;
		
		for(int i = 0; i < newChromosome.getPopulation(); i++)
		{
			total = total + newChromosome.getFitnessValue(i);
		}
		total = total / newChromosome.getPopulation();
		
		return total;
	}
	
	public double bestFitness()
	{
		double bestFit = 0;
		
		for(int i = 0; i < newChromosome.getPopulation(); i++)
		{
			if(newChromosome.getFitnessValue(i) > bestFit)
			{
				bestFit = newChromosome.getFitnessValue(i);
				
				for(int j = 0; j < newChromosome.getGene(); j++)
					bestChromosome[j] = newChromosome.getChromosome(i,j);
			}
		}
		
		return bestFit;
	}
	
	public int printBest(int i)
	{
		return bestChromosome[i];
	}
}