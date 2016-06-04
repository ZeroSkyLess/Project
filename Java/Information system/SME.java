import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

public class SME extends JFrame implements ActionListener
{
	
	private JPanel panel1 = new JPanel();
	private JLabel name = new JLabel("Name : ");
	private JTextField name1 = new JTextField(40);
	private JButton updatename = new JButton("Update");
	
	private JPanel panel2 = new JPanel();
	private JLabel id = new JLabel("ID : ");
	public static JTextField id1 = new JTextField(40);
	
	private JPanel panel3 = new JPanel();
	private JLabel age = new JLabel("Age : ");
	private JTextField age1 = new JTextField(40);
	private JButton updateage = new JButton("Update");
	
	private JPanel panel4 = new JPanel();
	private JLabel ic = new JLabel("IC : ");
	private JTextField ic1 = new JTextField(40);
	
	private JPanel panel5 = new JPanel();
	private JLabel notel = new JLabel("No.Tel : ");
	private JTextField notel1 = new JTextField(40);
	private JButton updatenotel = new JButton("Update");

	private JPanel panel6 = new JPanel();
	private JLabel position = new JLabel("Position : ");
	private JTextField position1 = new JTextField(40);
	
	
	private JPanel panel8 = new JPanel();
	private JLabel salary = new JLabel("Salary : ");
	private JTextField salary1 = new JTextField(40);
	
	private JButton finish = new JButton("Finish");
	
	private JLabel lab = new JLabel("System Information Employee");
	
	Connection conn = null;
	
	public SME()
	{	
		panel1.setLayout(new GridLayout(1,3,5,10));
		panel1.add(name);	
		panel1.add(name1);
		panel1.add(updatename);
		
		panel2.setLayout(new GridLayout(1,2,5,10));
		panel2.add(id);	
		panel2.add(id1);
	
		panel3.setLayout(new GridLayout(1,3,5,10));
		panel3.add(age);	
		panel3.add(age1);
		panel3.add(updateage);
	
		panel4.setLayout(new GridLayout(1,2,5,10));
		panel4.add(ic);		
		panel4.add(ic1);
	
		panel5.setLayout(new GridLayout(1,3,5,10));
		panel5.add(notel);
		panel5.add(notel1);
		panel5.add(updatenotel);
	
		panel6.setLayout(new GridLayout(1,2,5,10));
		panel6.add(position);	
		panel6.add(position1);
		
		panel8.setLayout(new GridLayout(1,2,5,10));
		panel8.add(salary);	
		panel8.add(salary1);
		
		add(lab);
		add(panel1);
		add(panel2);
		add(panel3);
		add(panel4);
		add(panel5);
		add(panel6);
		add(panel8);
		add(finish);
		
		updatename.addActionListener(this);
		updateage.addActionListener(this);
		updatenotel.addActionListener(this);
		finish.addActionListener(this);

		setTitle("System Information Employee");
		setLayout(new GridLayout(11,1,10,0));
		setSize(300,200);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);
		
		try
			{	
				Connection conn = MySqlConnection.dbConnection();
		
			}
		
			catch (Exception ex)
			{
			ex.printStackTrace();
			}
			
				try
			{	
				Connection conn = MySqlConnection.dbConnection();
		
			}
		
			catch (Exception ex)
			{
			ex.printStackTrace();
			}
			
			String query="(select * from employee where id = '"+ id1.getText() +"')";
			
			try
			{
			
				PreparedStatement stmt = conn.prepareStatement(query);
				ResultSet rs=stmt.executeQuery();
				
				rs.close();
			}
			
			catch (Exception ex)
			{
			ex.printStackTrace();
			}
	}
	
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == updatename)
		{
			String en = name1.getText();
			String eid = id1.getText();
			
			String query="(update employee set fullName = '"+ en +"' where id = '"+ eid +"')";
			
			try
			{
			
				PreparedStatement stmt = conn.prepareStatement(query);
				ResultSet rs=stmt.executeQuery();
				rs.close();
			}
			
			catch (Exception ex)
			{
			ex.printStackTrace();
			}
		
		}
		
		else if(e.getSource() == updateage)
		{
			String ea = age1.getText();
			String eid = id1.getText();
			
			String query="(update employee set age = '"+ ea +"' where id = '"+ eid +"')";
			
			try
			{
			
				PreparedStatement stmt = conn.prepareStatement(query);
				ResultSet rs=stmt.executeQuery();
				rs.close();
			}
			
			catch (Exception ex)
			{
			ex.printStackTrace();
			}
		}
		
		else if(e.getSource() == updatenotel)
		{
			String ent = notel1.getText();
			String eid = id1.getText();
			
			String query="(update employee set noTel = '"+ ent +"' where id = '"+ eid +"')";
			
			try
			{
			
				PreparedStatement stmt = conn.prepareStatement(query);
				ResultSet rs=stmt.executeQuery();
				rs.close();
			}
			
			catch (Exception ex)
			{
			ex.printStackTrace();
			}
		}
		
		
		else if(e.getSource() == finish)
		{
			setVisible(false);
		}

	}
	
	public static void main(String[] args)
	{
	SME a = new SME();	
	
	}

}