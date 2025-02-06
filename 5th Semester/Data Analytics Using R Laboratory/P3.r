fine <- function(d) if(d <= 7) 0 else if(d <= 30) (d-7)*2 else 50
d <- as.integer(readline("Days overdue: "))
f <- fine(d)
cat("Fine: $", f, "\n",if(f == 0) "No fine!" else if(f == 50) "Exceeded cap!" else "Please pay!", "\n")