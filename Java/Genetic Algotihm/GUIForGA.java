import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.text.*;
import javax.swing.event.*;
import java.text.ParseException;
import javax.swing.table.DefaultTableModel;
import java.lang.Object;
import org.jfree.chart.ChartFactory;
import org.jfree.chart.ChartPanel;
import org.jfree.chart.JFreeChart;
import org.jfree.chart.plot.CategoryPlot;
import org.jfree.chart.plot.PlotOrientation;
import org.jfree.data.category.DefaultCategoryDataset;

public class GUIForGA extends JFrame implements ActionListener
{
	private Menu menu;
	
	private JPanel superPanel = new JPanel();
	JScrollPane scroll = new JScrollPane(superPanel);
	
	private JPanel panel = new JPanel();
	// Title
	private JPanel panel1 = new JPanel();
	private JLabel title = new JLabel("Welcome to GA Budget Solve World");
	
	private JPanel panel2 = new JPanel();
	
	//First row, First column
	private JPanel panel21 = new JPanel();
	private JLabel pop = new JLabel("Population :");
	private JFormattedTextField population;
	
	//First row, Second column
	private JPanel panel22 = new JPanel();
	private JLabel bud = new JLabel("Budget :");
	private JFormattedTextField budget;
	
	private JPanel panel3 = new JPanel();
	
	//Second row, First column
	private JPanel panel31 = new JPanel();
	private JLabel xProb = new JLabel("Crossover Probability : RM");
	private JFormattedTextField xOver;
	
	//Second row, Second column
	private JPanel panel32 = new JPanel();
	private JLabel mProb = new JLabel("Mutation Probability :");
	private JFormattedTextField mutation;
	
	private JPanel panel4 = new JPanel();
	private JButton start = new JButton("Start");

	//Table
	private JPanel panel5 = new JPanel();
	private JPanel panel51 = new JPanel();
	private JTable table;
	private JScrollPane scrollPane;
	private JLabel tableTitle = new JLabel("Menu");
	
	private JPanel panel52 = new JPanel();
	private JLabel totalPrice = new JLabel("Total Price : RM");
	private JTextField tot = new JTextField(5);
	
	//Graph
	private JPanel panel6 = new JPanel();
	private DefaultCategoryDataset dataset = new DefaultCategoryDataset();
	
	private ValueGA vga;
	private GeneticAlgorithm ga;
	
	public GUIForGA()
	{
		menu = new Menu();
		
		try
		{
			MaskFormatter mf = new MaskFormatter("##");
			MaskFormatter mf1 = new MaskFormatter("####");
			MaskFormatter mf2 = new MaskFormatter("0.#");
			
			population = new JFormattedTextField(mf);
			population.setColumns(6);
			
			budget = new JFormattedTextField(mf1);
			budget.setColumns(6);
			
			xOver = new JFormattedTextField(mf2);
			xOver.setColumns(3);
			
			mutation = new JFormattedTextField(mf2);
			mutation.setColumns(3);
		}
		catch(ParseException e)
		{}
		
		superPanel.setLayout(new GridLayout(3,1,10,10));
		
		panel.setLayout(new GridLayout(4,1,5,5));
		
		panel1.setLayout(new FlowLayout());
		panel1.add(title);
		panel.add(panel1);
		
		panel2.setLayout(new GridLayout(1,2,10,10));
		panel21.setLayout(new FlowLayout());
		panel21.add(pop);
		panel21.add(population);
		panel2.add(panel21);
		
		panel22.setLayout(new FlowLayout());
		panel22.add(bud);
		panel22.add(budget);
		panel2.add(panel22);
		panel.add(panel2);
		
		panel3.setLayout(new GridLayout(1,2,10,10));
		panel31.setLayout(new FlowLayout());
		panel31.add(xProb);
		panel31.add(xOver);
		panel3.add(panel31);
		
		panel32.setLayout(new FlowLayout());
		panel32.add(mProb);
		panel32.add(mutation);
		panel3.add(panel32);
		panel.add(panel3);
		
		panel4.setLayout(new FlowLayout());
		panel4.add(start);
		panel.add(panel4);
	
		superPanel.add(panel);
		
		//add  table in panel 5  (menu list) -- create array of price in chromosome.java
		panel5.setLayout(new BorderLayout());
		panel51.setLayout(new BorderLayout());
		
		table = new JTable(new DefaultTableModel(menu.getFoodDrink(),menu.getTitle()));
		scrollPane = new JScrollPane(table);
		scrollPane.setPreferredSize(new Dimension(200, 480));
		Color light_blue = new Color (205, 235, 255);
        scrollPane.getViewport().setBackground(light_blue);  // right of table
		panel51.add(scrollPane, BorderLayout.CENTER);
		
		
		panel51.add(table.getTableHeader(), BorderLayout.NORTH);
		panel5.add(tableTitle,BorderLayout.NORTH);
		panel5.add(panel51,BorderLayout.CENTER);
		
		panel52.add(totalPrice);
		panel52.add(tot);
		panel5.add(panel52,BorderLayout.SOUTH);
		
		superPanel.add(panel5,BorderLayout.CENTER);
		
		//add graph in panel 6 (best fitness and average fitness)
		JFreeChart lineChart = ChartFactory.createLineChart("Fitness value versus Generation","Generation","Fitness Value",dataset);
		ChartPanel paneChart= new ChartPanel(lineChart);
		scroll.setPreferredSize(new Dimension(600,500));
		add(scroll);
		
		table.setEnabled(false);
		start.addActionListener(this);
		
		setVisible(true);
		setSize(600,500);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);	
	}
	
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == start)
		{
			if(population.getText().equals(""))
				JOptionPane.showMessageDialog(null, "Please insert the value for population");
			
			else if(budget.getText().equals(""))
				JOptionPane.showMessageDialog(null, "Please insert the value for budget");
			
			else if(Integer.parseInt(budget.getText()) > 7500)
			{
				JOptionPane.showMessageDialog(null, "The budget maximum is 7500");
				budget.setText("");
			}
			
			else if(Integer.parseInt(budget.getText()) < 1000)
			{
				JOptionPane.showMessageDialog(null, "The budget minimum is 1000");
				budget.setText("");
			}
			
			else if(Integer.parseInt(population.getText()) < 10)
			{
				JOptionPane.showMessageDialog(null, "The population minimum is 10");
				budget.setText("");
			}
			
			else if(xOver.getText().equals(""))
				JOptionPane.showMessageDialog(null, "Please insert the value for Crossover Probability");

			
			else if(mutation.getText().equals(""))
				JOptionPane.showMessageDialog(null, "Please insert the value for Mutation Probability");
			
			else
			{
				double crossover = Double.parseDouble(xOver.getText());
				double mutate = Double.parseDouble(mutation.getText());
				int popu = Integer.parseInt(population.getText());
				int total = Integer.parseInt(budget.getText());
				
				vga = new ValueGA(mutate,crossover,popu,total);
				ga = new GeneticAlgorithm(vga);
				ga.start(this);
			}
		}
	}
	

	public void setValue(int quantity, int row)
	{
		table.setValueAt(quantity, row, 2);
	}
	
	public void drawGraph(DefaultCategoryDataset dataset)
	{
		JFreeChart lineChart = ChartFactory.createLineChart("Fitness value versus Generation","Generation","Fitness Value",dataset);
		
		ChartPanel paneChart= new ChartPanel(lineChart);
		panel6.setLayout(new FlowLayout());
		panel6.validate();
		panel6.repaint(); 
		panel6.add(paneChart);
		superPanel.add(panel6);
		superPanel.validate();
		superPanel.repaint();   
	}
	
	public void setPrice(int price)
	{
		tot.setText(Integer.toString(price));
	}
	
}
		
		
		
		
		
		
		
		
		