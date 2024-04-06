a = int(input("Enter the first operand: "))
b = int(input("Enter the second operand: "))
c = int(input("Enter the number corresponding to the desired operation:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n"))

if(c==1):
    print(f"Sum: {a+b}")
elif(c==2):
    print(f"Difference: {a-b}")
elif(c==3):
    print(f"Product: {a*b}")
elif(c==4):
    print(f"Quotient: {a/b}")
else:
    print("Wrong number entered!")