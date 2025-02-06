marks <- matrix(c(
  85,92,78,88,95, 88,89,78,77,81,
  75,80,85,70,60, 90,67,70,89,87,
  100,78,56,34,56, 45,78,97,66,89,
  78,45,67,89,90, 56,89,67,99,98,
  89,80,67,78,90, 67,78,90,78,78
), 10, 5, byrow=TRUE)
names <- c("John","Anna","Tim","Harry","Pal","Jim","Peter","Bob","Cook","James")
results <- data.frame(
  Name = names,
  Total = rowSums(marks),
  Average = rowMeans(marks)
)
results$Grade <- ifelse(results$Average >= 90, "A",
                        ifelse(results$Average >= 80, "B",
                               ifelse(results$Average >= 70, "C",
                                      ifelse(results$Average >= 60, "D", "F"))))
print(results)