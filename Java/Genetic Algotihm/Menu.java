public class Menu{
	private String[] title= {"Foods & Drinks","Price","Quantity"};
	private Object[][] foodDrink = {
		{"chicken",20,0}, {"burger",50,0}, {"mushroom soup",15,0}, {"steak", 50,0}, 
		{"hotdog", 40,0}, {"chicken wings", 25,0}, {"fried rice",48,0}, {"spagetti",75,0}, 
		{"tenderloin", 108,0}, {"chicken kebab", 66,0}, {"hot tea", 21,0}, {"coca-cola",32,0}, 
		{"smooties", 43,0}, {"hot chocolate", 42,0}, {"strawberry shake", 100,0}, {"still water", 12,0}, 
		{"orange juice", 40,0}, {"energy drink", 30,0}, {"mango shake", 60,0}, {"iced tea", 55,0}
	};
	
	public Menu()
	{
	}
	
	public String[] getTitle()
	{
		return title;
	}
	
	public Object[][] getFoodDrink()
	{
		return foodDrink;
	}
	
	public int getPrice(int j)
	{
		return (Integer)foodDrink[j][1];
	}
}