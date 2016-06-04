import javax.swing.table.DefaultTableModel;
import java.lang.Object;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Overall extends JFrame
{
	private JTable table;
	private JScrollPane scrollPane;
	private JLabel tableTitle = new JLabel("Menu");
	
	private String[] title= {"Generation","Best Fitness Value","Average Fitness Value"};
	private Object[][] fitness;
	
	public Overall(double[] avg, double[] best, int generation)
	{
		fitness = new Object[generation][3];
		
		for(int i = 0; i < generation; i++)
		{
			fitness[i][0] = i;
			fitness[i][1] = best[i];
			fitness[i][2] = avg[i];
		}
		
		table = new JTable(new DefaultTableModel(fitness,title));
		scrollPane = new JScrollPane(table);
		scrollPane.setPreferredSize(new Dimension(200, 480));
		Color light_blue = new Color (205, 235, 255);
        scrollPane.getViewport().setBackground(light_blue);  // right of table
		add(scrollPane);
		
		table.setEnabled(false);
		
		setVisible(true);
		setSize(480,600);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);
	}
}