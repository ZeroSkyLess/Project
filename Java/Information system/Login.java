import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

public class Login extends JFrame
{
	public static JTextField eid = new JTextField(10); //get userid
	private JTextField pass = new JTextField(10); //get password
	
	private Button login =  new Button("Login"); //button to proceed
	
	Connection conn = null;
	
	public Login()
	{
		
		JPanel panel1 = new JPanel();
		panel1.add(new JLabel("UserID"));
		panel1.add(eid);
		panel1.add(new JLabel("Password"));
		panel1.add(pass);
		panel1.add(login);
		add(panel1,BorderLayout.NORTH);
		
		try{	
				Connection conn = MySqlConnection.dbConnection();
		
			}
			
		catch (Exception ex)
		{
			ex.printStackTrace();
		}
	}
	
	public void actionPerformed(ActionEvent e)
	{
	if(e.getSource() == login)
	{
		String id = eid.getText();
		String userpassword = pass.getText();
		String query="(SELECT fullName ,password , position, id from employee  where id=? and password=?)";
		
		try
		{
			
			PreparedStatement stmt = conn.prepareStatement(query);
			stmt.setString(1, eid.getText());
			stmt.setString(2, pass.getText());
                        
			ResultSet rs=stmt.executeQuery();
   

			if(rs.next())
			{
				JOptionPane.showMessageDialog(null,"Welcome "+rs.getString("fullName")+" !!!" +"\n"+"You 're log in.\n" +
				"Enjoy your working Day.");
				
				
				if(rs.getString("position") == "Emp")
				{
					
					PortalE a = new PortalE();
					PortalE.id.setText(this.eid.getText());
				}
				
				else if(rs.getString("position") == "Staff")
				{
					PortalA a = new PortalA();
				}
				
				
				rs.close();
				
			}
			
			else	
			{
				JOptionPane.showMessageDialog(null, "Wrong username or password, please try again");
			}
				
		}
		
		catch(Exception ex)
		{
			ex.printStackTrace();
		}
		}
	}


	public static void main(String[] args)
	{
		Login a = new Login();
	}
}