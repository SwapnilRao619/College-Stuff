library(ggplot2);library(gridExtra);
s<-data.frame(Names=paste("S",1:15),Scores=sample(60:100,15,T),Attendance=sample(60:100,15,T),Time=1:15)
grid.arrange(
  ggplot(s,aes(Scores,Attendance))+geom_point(color="red")+labs(title="Scores vs Attendance",x="Scores",y="Attendance"),
  ggplot(s,aes(Names,Scores))+geom_bar(stat="identity",fill="blue")+labs(title="Score Distribution",x="Students",y="Scores"),
  ggplot(s,aes(Time,Scores))+geom_line(color="green")+labs(title="Score Trend",x="Time",y="Scores"),
  ggplot(s,aes(Scores))+geom_histogram(color="black",fill="purple",binwidth=10)+labs(title="Score Distribution",x="Scores",y="Count")
  ,ncol=2)