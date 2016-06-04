import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;

public class PortalA extends JFrame implements ActionListener
{
	public static JTextField id =  new JTextField(10);
	private JLabel portal = new JLabel("Portal Member");
	private JButton sme = new JButton("System Information Employee");
	private JButton cp = new JButton("Change Password");
	private JButton ine = new JButton("Insert new Employee");
	private JButton de = new JButton("Delete Employee");
	private JButton logout = new JButton("Log Out");
	private JPanel pan = new JPanel();
		
	public PortalA() // Get the position of employee
	{	
			pan.setLayout(new GridLayout(1,2,40,20));
			pan.add(portal);
			pan.add(id);
			add(sme);
			add(ine);
			add(de);
			add(cp);
			add(logout);
			de.addActionListener(this);
			sme.addActionListener(this);
			ine.addActionListener(this);
			cp.addActionListener(this);
			logout.addActionListener(this);
			setLayout(new GridLayout(6,1,0,5));
		
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
		
		else if(e.getSource() == ine)
		{
			setVisible(false);
			
			INE c = new INE();
		}
		
		else if(e.getSource() == de)
		{
			setVisible(false);
			
		
		}
		
		else if(e.getSource() == cp)
		{
			setVisible(false);
			ChangePassword d = new ChangePassword();
			ChangePassword.id.setText(this.id.getText());
		}
		
		else if(e.getSource() == logout)
		{
			setVisible(false);
			Login a = new Login();
		}
	
	}
}	