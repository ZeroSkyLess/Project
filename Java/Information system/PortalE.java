import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

public class PortalE extends JFrame implements ActionListener
{
	public static JTextField id =  new JTextField(10);
	private JLabel portal = new JLabel("Portal Member");
	private JButton sme = new JButton("System Information Employee");
	private JButton cp = new JButton("Change Password");
	private JButton ine = new JButton("Insert new Employee");
	private JButton de = new JButton("Delete Employee");
	private JButton logout = new JButton("Log Out");
	private JPanel pan = new JPanel();
		
	public PortalE() // Get the position of employee
	{	
			pan.setLayout(new GridLayout(1,2,40,20));
			pan.add(portal);
			pan.add(id);
			add(pan);
			add(sme);
			add(cp);
			add(logout);
			sme.addActionListener(this);
			cp.addActionListener(this);
			logout.addActionListener(this);
			setLayout(new GridLayout(4,1,0,5)); // if user is employee}
		
		
			id.setEnabled(false);
			setTitle("Portal");
			setVisible(true);	
			setSize(300,200);
			setLocationRelativeTo(null);
			setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
	}
	
	public void actionPerformed(ActionEvent e)
	{
		
		if(e.getSource() == sme)
		{
			setVisible(false);
			SME b = new SME();
			SME.id1.setText(this.id.getText());
			setVisible(true);
		}
		
		else if(e.getSource() == cp)
		{
			setVisible(false);
			ChangePassword d = new ChangePassword();
			ChangePassword.id.setText(this.id.getText());
			setVisible(true);
		}
		
		else if(e.getSource() == logout)
		{
			setVisible(false);
			Login a = new Login();
		}
	
	}

	public static void main(String[] args)
	{
		PortalE a = new PortalE();	
	
	}

}	
		