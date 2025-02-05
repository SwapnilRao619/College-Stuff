import java.io.*; 
import javax.servlet.*; 
import javax.servlet.http.*; 
public class P11 extends HttpServlet { 
    public void service(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException { 
        res.setContentType("text/html"); 
        PrintWriter pw = res.getWriter(); 
        String name = req.getParameter("name"); 
        int age = Integer.parseInt(req.getParameter("age")); 
        pw.println("<font color='" + (age >= 18 ? "green'>Welcome " : "red'>Hello ") + name + ", " + (age >= 18 ? "to this site" : "you are not authorized to visit the site") + "</font>");
        pw.close(); 
    } 
}