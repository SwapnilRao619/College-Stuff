def fact(n):
    return 1 if n==0 else n*fact(n-1)
num=int(input("Enter the number: "))
print(f"Factorial of {num} is: {fact(num)}")
