<%@ page import="java.util.*" %>
<form action="Session2.jsp" method="get">
    <% 
    Date d = new Date();
    String user = request.getParameter("uname");
    session.setAttribute("user", user);
    session.setAttribute("time", d.getTime());
    %>
    <p align="right">Time: <%= d.getTime() %></p>
    Hello <%= user %><br>
    <input type="submit" value="logout">
</form>