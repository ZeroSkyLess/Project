import java.text.DecimalFormat;

public class Chromosome{
	private int population;
	private	int gene;
	private int[][] chromosome;
	private double fitnessValue[];
	Menu menu = new Menu();
	private int[] price;
	
	private DecimalFormat decFor = new DecimalFormat("0.00");
	
	public Chromosome(int population, int gene)
	{
		this.population = population;
		this.gene = gene;
		chromosome = new int[population][gene];
		fitnessValue = new double[population];
		
		price = new int[gene];
		
		for(int i = 0; i < gene; i++)
			price[i] = menu.getPrice(i);

	}
	
	public void setChromosome(int chromo[][])
	{
		chromosome = chromo;
	}
	
	public void setChromosome(int i, int j, int val)
	{
		chromosome[i][j] = val;
	}
	
	public int[][] getChromosome()
	{
		return chromosome;
	}
	
	public int getChromosome(int i, int j)
	{
		return chromosome[i][j];
	}
	
	public void printChromosome()
	{
		for (int i = 0; i < population; i++){
			System.out.print ("\tC" + (i+1) + "\t");
			for (int j = 0; j < gene; j++){
				System.out.print(chromosome[i][j]);
			}
			System.out.print("\n");
		}
		System.out.print("\n");
	}
	
	public void printChromosome(int size)
	{
		for (int i = 0; i < size; i++){
			System.out.print ("\tC" + (i+1) + "\t");
			for (int j = 0; j < gene; j++){
				System.out.print(chromosome[i][j]);
			}
			System.out.print("\n");
		}
		System.out.print("\n");
	}
	
	public void setFitnessValue(double fitVal, int i)
	{
		fitnessValue[i] = fitVal;
	}
	
	public double[] getFitnessValue()
	{
		return fitnessValue;
	}
	
		public double getFitnessValue(int i)
	{
		return fitnessValue[i];
	}
	
	public void printFitnessValue()
	{
		System.out.println("Fitness Value:");
		System.out.println("Index\tChromosome\t\tFitnessValue");
		
		for(int i = 0; i < population; i++)
		{
			System.out.print("C" + (i+1) + ": \t" );
			
			for(int j = 0; j < gene; j++)
			{
				System.out.print(chromosome[i][j]);
			}
			
			System.out.println("\t\t" + decFor.format(fitnessValue[i]));
		}
		System.out.print("\n");
	}
			
	public int getPrice(int i)
	{
		return price[i];
	}
	
	public int getPopulation()
	{
		return population;
	}
	
	public int getGene()
	{
		return gene;
	}
}