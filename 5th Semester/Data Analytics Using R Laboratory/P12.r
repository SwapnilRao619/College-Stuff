library(dplyr)
df<-read.csv("data.csv")
str(df); summary(df);
cat("Total number of matches: ", nrow(df),"\n")
cat("Total number of unique teams: ",length(unique(c(df$team1,df$team2))),"\n")
cat("List of unqiue teams: ",unique(c(df$team1,df$team2)))
wins<-table(df$winner); print(wins);
cat("Average total runs: ",mean(df$win_by_runs),"\n")
cat("Average total wickets: ",mean(df$win_by_wickets),"\n")
venues<-table(df$venue); cat("Most common venue: ",names(venues)[which.max(venues)]);
barplot(wins,main="Matches Won By Teams",xlab="Teams",ylab="No. of wins",col=rainbow(length(wins)),las=2)