cart <- data.frame(
  name = c("Apple", "Milk", "Bread"),
  price = c(0.5, 1.2, 1.0),
  quantity = c(4, 2, 1)
)
cart$subtotal <- cart$price * cart$quantity
total <- sum(cart$subtotal)
tax <- total * 0.08
final <- total + tax
cat("\nReceipt:\n")
print(cart)
cat("\nTotal: $", total,"\nTax (8%): $", tax,"\nFinal Total: $", final)