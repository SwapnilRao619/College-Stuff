i<-character(0)
q<-numeric(0)
while(TRUE){
  switch(readline("1.Add 2.Update 3.Show 4.Exit: "),
         "1"={
           i<-c(i,readline("Item: "))
           q<-c(q,readline("Quantity: "))
         },
         "2"={
           x=readline("Item: ")
           q[i==x]<-as.numeric(readline("New quantity: "))
         },
         "3"={cat(paste(i,q,"\n"))},
         "4"={break},
         cat("Invalid option!")
  )
}