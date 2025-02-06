library(dplyr)
d<-data.frame(
  N=character(),
  M=numeric(),
  S=numeric(),
  H=numeric(),
  A=numeric()
)
while(TRUE){
  switch(readline("1.Add 2.Report 3.Exit: "),
         "1"={
           d<-rbind(d,data.frame(
             N=readline("Name: "),
             M=as.numeric(readline("Maths: ")),
             S=as.numeric(readline("Science: ")),
             H=as.numeric(readline("History: ")),
             A=as.numeric(readline("Attendance: "))
           ))
         },
         "2"={
           print(d%>%mutate(Avg=(M+S+H)/3,Status=ifelse(A<70,"Low","OK"))%>%select(N,Avg,Status))
         },
         "3"={break},
         cat("Invalid option!")
  )
}