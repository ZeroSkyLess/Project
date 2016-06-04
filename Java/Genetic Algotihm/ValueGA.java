public class ValueGA{
	private double mProb;
	private double xProb;
	private int population;
	private int budget;
	
	public ValueGA(double mProb, double xProb, int population, int budget)
	{
		this.mProb = mProb;
		this.xProb = xProb;
		this.population = population;
		this.budget = budget;
	}
	
	public double getMutationProbability()
	{
		return mProb;
	}
	
	public double getXoverProbability()
	{
		return xProb;
	}
	
	public int getPopulation()
	{
		return population;
	}
	
	public int getBudget()
	{
		return budget;
	}
}