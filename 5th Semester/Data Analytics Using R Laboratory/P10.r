library(dplyr)
df1=data.frame(ID=1:5,N=c("A","B","C","D","E"),S=c(85,92,78,95,88));df2=data.frame(ID=1:5,Age=c(19,20,18,19,20),City=c("NY","CF","BL","NY","KK"));
df1%>%
  filter(S>80) %>%
  select(ID,N,S) %>%
  mutate(G=ifelse(S>=90,"A","B")) %>%
  arrange(desc(S)) %>%
  inner_join(df2,by="ID") %>%
  group_by(City) %>%
  summarise(AvgScore=mean(S),count=n()) %>%
print()