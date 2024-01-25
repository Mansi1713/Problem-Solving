import java.sql.*;

public class Database
{
     public static void main(String arg[]) throws Exception
     {
        Class.forName("com.mysql.cj.jdbc.Driver");
        String URL="jdbc:mysql://localhost:3306/ppa";
        String Username="root";
        String Password="root";
        String Query="select *from student";

        Connection cobj=DriverManager.getConnection(URL,Username,Password);
        Statement sobj=cobj.createStatement();
        ResultSet robj=sobj.executeQuery(Query);

        while(robj.next())
        {
            System.out.println("RID"+robj.getInt("RNO"));
            System.out.println("Name"+robj.getString("Name"));
            System.out.println("City"+robj.getString("address"));
            System.out.println("Marks"+robj.getInt("marks"));
            
            
            
        }
     }
}