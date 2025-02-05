// Write a java program that connects to a database using JDBC and demonstrate CRUD operations.

import java.sql.*;
public class P10{
    public static void main(String[] args){
        try (Connection c=DriverManager.getConnection("jdbc:mysql://localhost:3306/studentdb","root","root")){
            c.createStatement().execute("INSERT INTO student VALUES ('Swapnil Rao',21,'1MS22',4)");
            ResultSet rs=c.createStatement().executeQuery("SELECT * FROM student");
            while(rs.next())
                System.out.printf("%s %d %s %d\n",rs.getString(1),rs.getInt(2),rs.getString(3),rs.getInt(4));
            c.createStatement().execute("UPDATE student SET Semester=5 WHERE USN='1MS22'");
            c.createStatement().execute("DELETE FROM student WHERE USN='1MS22'");
        } catch (SQLException e){
            System.out.println("Error: "+e.getMessage());
        }
    }
}