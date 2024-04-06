def max_of_three(n1,n2,n3):
    if(n1>n2 and n1>n3):
        print(f"{n1} is the greatest number.")
    elif(n2>n1 and n2>n3):
        print(f"{n2} is the greatest number.")
    elif(n3>n1 and n3>n2):
        print(f"{n3} is the greatest number.")

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
c = int(input("Enter the third number: "))

max_of_three(a,b,c)