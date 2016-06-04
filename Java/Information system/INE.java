import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

public class INE extends JFrame implements ActionListener
{
	
	private JPanel panel1 = new JPanel();
	private JLabel name = new JLabel("Name : ");
	private JTextField name1 = new JTextField(40);
	
	private JPanel panel2 = new JPanel();
	private JLabel id = new JLabel("ID : ");
	private JTextField id1 = new JTextField(40);
	
	private JPanel panel3 = new JPanel();
	private JLabel age = new JLabel("Age : ");
	private JTextField age1 = new JTextField(40);
	
	private JPanel panel4 = new JPanel();
	private JLabel ic = new JLabel("IC : ");
	private JTextField ic1 = new JTextField(40);
	
	private JPanel panel5 = new JPanel();
	private JLabel notel = new JLabel("No.Tel : ");
	private JTextField notel1 = new JTextField(40);

	private JPanel panel6 = new JPanel();
	private JLabel position = new JLabel("Position : ");
	private JTextField position1 = new JTextField(40);
	
	private JPanel panel7 = new JPanel();
	private JLabel department = new JLabel("Department : ");
	private JTextField department1 = new JTextField(40);
	
	private JPanel panel8 = new JPanel();
	private JLabel password = new JLabel("password : ");
	private JTextField password1 = new JTextField(40);
	
	private JButton insert = new JButton("Insert");
	
	private JLabel lab = new JLabel("Insert New Employee");
	
	Connection conn = null;
	
	public INE()
	{	
		panel1.setLayout(new GridLayout(1,2,5,10));
		panel1.add(name);	
		panel1.add(name1);
		
		panel2.setLayout(new GridLayout(1,2,5,10));
		panel2.add(id);	
		panel2.add(id1);
	
		panel3.setLayout(new GridLayout(1,2,5,10));
		panel3.add(age);	
		panel3.add(age1);
	
		panel4.setLayout(new GridLayout(1,2,5,10));
		panel4.add(ic);		
		panel4.add(ic1);
	
		panel5.setLayout(new GridLayout(1,2,5,10));
		panel5.add(notel);
		panel5.add(notel1);
	
		panel6.setLayout(new GridLayout(1,2,5,10));
		panel6.add(position);	
		panel6.add(position1);
		
		panel7.setLayout(new GridLayout(1,2,5,10));
		panel7.add(department);	
		panel7.add(department1);
		
		panel8.setLayout(new GridLayout(1,2,5,10));
		panel8.add(password);	
		panel8.add(password1);
		
		
		add(lab);
		add(panel1);
		add(panel2);
		add(panel3);
		add(panel4);
		add(panel5);
		add(panel6);
		add(panel7);
		add(panel8);
		add(insert);
	
		insert.addActionListener(this);

		
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
	}
	
	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == insert)
		{
			
			String query="(insert values into employee ('"+name1.getText()+"','"+age1.getText()+"','"+ic1.getText()+"','"+id1.getText()+"','"+notel1.getText()+"','"+department1.getText()+"','"+position1.getText()+"','"+password1.getText()+"',))";
			
			try
			{
			
				PreparedStatement stmt = conn.prepareStatement(query);
				ResultSet rs=stmt.executeQuery();
				JOptionPane.showMessageDialog(null,"Insert Successful");
				rs.close();
				setVisible(false);
			}
			
			catch (Exception ex)
			{
			ex.printStackTrace();
			}
		}

	}
	
	public static void main(String[] args)
	{
		INE a = new INE();	
	
	}

}