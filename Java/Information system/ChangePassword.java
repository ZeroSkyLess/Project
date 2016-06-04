import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

public class ChangePassword extends JFrame implements ActionListener
{
	private JPanel pan = new JPanel();
	public static JTextField id = new JTextField(10);
	private JLabel lab = new JLabel("Change Password");
	
	private JPanel panel1 = new JPanel();
	private JLabel op = new JLabel("Old Password : ");
	private JTextField op1 = new JTextField(10);
	
	private JLabel np = new JLabel("New Password");
	private JTextField np1 = new JTextField(10);
	
	private JLabel cnp = new JLabel("Confirmed new password");
	private JTextField cnp1 = new JTextField(10);
	
	private JPanel panel2 = new JPanel();
	private JButton ok = new JButton("OK");
	private JButton back = new JButton("back");
	
	Connection conn = null;
	
	public ChangePassword()
	{	
		pan.setLayout(new BorderLayout());
		pan.add(id,BorderLayout.EAST);
		
		panel1.setLayout(new GridLayout(3,2,10,3));
		panel1.add(op);
		panel1.add(op1);
		panel1.add(np);
		panel1.add(np1);
		panel1.add(cnp);
		panel1.add(cnp1);

		panel2.setLayout(new BorderLayout(5,10));
		panel2.add(back,BorderLayout.WEST);
		panel2.add(ok,BorderLayout.EAST);
		
		add(lab);
		add(pan);
		add(panel1);
		add(panel2);
		
		id.setEnabled(false);
		
		ok.addActionListener(this);
		back.addActionListener(this);
		
		setLayout(new GridLayout(4,1,0,10));
		setSize(400,300);
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
		if(e.getSource() == ok)
		{
		
			if(np1.getText() == cnp1.getText())
			{
			
				String query="(update employee set password = '"+ np1.getText() +"' where id = '"+ id.getText() +"')";
			
				try
				{
			
					PreparedStatement stmt = conn.prepareStatement(query);
					ResultSet rs=stmt.executeQuery();
					rs.close();
					JOptionPane.showMessageDialog(null,"Changed Successful");
					setVisible(false);
			
				}
			
				catch (Exception ex)
				{
				ex.printStackTrace();
				}
			}
			
			else
			JOptionPane.showMessageDialog(null,"You key in wrong confirm password");
		}
		
		else if(e.getSource() == back)
		{
				setVisible(false);
		}

	}
	
	public static void main(String[] args)
	{
	ChangePassword a = new ChangePassword();	
	
	}

}
	