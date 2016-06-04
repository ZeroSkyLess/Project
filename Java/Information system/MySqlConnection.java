
import javax.swing.JOptionPane;
import java.sql.*;


public class MySqlConnection {
    
    public static Connection dbConnection(){
    
        Connection con;

    try{
        
  
        con = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/oop","sky","1234");
        

        
        return con;
        
        
    }catch(Exception e){
    
    JOptionPane.showMessageDialog(null, e);
    return null;
    
    }
        
        
    }
    
  

}

