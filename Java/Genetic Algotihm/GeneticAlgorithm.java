import java.io.*;
import java.text.DecimalFormat;

import org.jfree.data.category.DefaultCategoryDataset;

public class GeneticAlgorithm
{
	private Chromosome newChromosome;
	private Chromosome parentChromosome;
	private Chromosome childrenChromosome;
	private GeneticAlgorithmProcess gap;
	private int[] bestChromosome;
	private ValueGA val;
	private GUIForGA gui;
	private int gene = 20;
	private int generation = 20;
	private int[][] bestChromo;
	private double[] avg;
	private	double[] best;
	private DecimalFormat decFor = new DecimalFormat("0.00");
	private Menu menu = new Menu();
	private Overall overall;
	
	public GeneticAlgorithm(ValueGA va)
	{
		
		val = va;
		newChromosome = new Chromosome(val.getPopulation(),gene);
		parentChromosome = new Chromosome(2,gene);
		childrenChromosome = new Chromosome(2,gene);
		
		bestChromosome = new int[gene];
		bestChromo = new int[generation][gene];
		gap = new GeneticAlgorithmProcess(newChromosome,parentChromosome,childrenChromosome, bestChromosome, val.getBudget());
	}
	
	public void start(GUIForGA gui)
	{
		DefaultCategoryDataset dataset = new DefaultCategoryDataset();
		
		this.gui = gui;
		
		 avg = new double[generation];
		 best = new double[generation];
		
		//System.out.println("Generation 1");
		
		gap.initialize();
		gap.fitnessEvaluate();
		
		avg[0] = gap.calculateAverage();
		best[0] = gap.bestFitness();
		
		dataset.addValue(avg[0], "Average","0");
		dataset.addValue(best[0], "Best Fitness","0");
		
		for(int i = 0; i < gene; i++)
		{
			bestChromo[0][i] = gap.printBest(i);
		}
		
	/* 	System.out.print((best[0]) + "\t" + decFor.format(avg[0]) + "\t");
		for(int j = 0; j < gene; j++)
				System.out.print(gap.printBest(j)); */
		
		for(int generationIndex = 1; generationIndex < generation; generationIndex++)
		{		
			//System.out.println("\n\nGeneration " + (generationIndex+1));
		
			for(int i = 0; i < val.getPopulation() /2; i++)
			{	
				gap.parentSelection();
				gap.crossOver(val.getXoverProbability());
				gap.mutation(val.getMutationProbability());
				gap.survivorSelection();
			}
			gap.fitnessEvaluate();
		
			avg[generationIndex] = gap.calculateAverage();
			best[generationIndex] = gap.bestFitness();
			
			dataset.addValue(avg[generationIndex], "Average",Integer.toString(generationIndex));
			dataset.addValue(best[generationIndex], "Best Fitness",Integer.toString(generationIndex));
			
			for(int i = 0; i < gene; i++)
			{
				bestChromo[generationIndex][i] = gap.printBest(i);
			}
			
			/* System.out.print((best[generationIndex]) + "\t" + decFor.format(avg[generationIndex]) + "\t");
			for(int j = 0; j < gene; j++)
				System.out.print(bestChromo[generationIndex][j]); */
		}
		
		double fit = 0.00;
				
		for(int i = 0; i < generation; i++)
		{
			if(fit < best[i])
			{
				for(int j = 0; j < gene; j++)
				{
					bestChromosome[j] = bestChromo[i][j];
					fit = best[i];
				}
			}
		}
		
		int total = 0;
		
		for(int j = 0; j < gene; j++)
		{
					gui.setValue(bestChromosome[j],j);
					total = total + ( bestChromosome[j] * menu.getPrice(j));
		}
		
		gui.setPrice(total);
		
		
		System.out.println("\n\nG\tBest\tAverage\t\tChromosome");
		
		for(int i = 0; i < generation; i++)
		{
			System.out.print("G" + (i+1) + "\t" + decFor.format(best[i]) + "\t" + decFor.format(avg[i]) + "\t\t");
			
			for(int j = 0; j < gene; j++)
				System.out.print(bestChromo[i][j]);
			System.out.print("\n");
		}
		
		gui.drawGraph(dataset);
		overall = new Overall(avg,best,generation);
	}

	
}