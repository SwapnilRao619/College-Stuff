<%@ page import="java.util.*" %>
<% 
Date d2 = new Date();
String user = (String)session.getAttribute("user");
long duration = (d2.getTime() - (Long)session.getAttribute("time")) / 60;
session.invalidate();
%>
Thank you <%= user %><br>
Session duration: <%= duration %> seconds