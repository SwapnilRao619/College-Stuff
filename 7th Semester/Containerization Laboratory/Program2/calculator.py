print("===Simple Arithmetic Calculator===\n")
choice=int(input("Enter your choice:\n1.Addition\n2.Multiplication\n3.Subtraction\n4.Division\n"))
o1=int(input("Enter the first number: "))
o2=int(input("Enter the second number: "))
if(choice==1):
    result=o1+o2
elif(choice==2):
    result=o1*o2
elif(choice==3):
    result=o1-o2
else:
    if(o2==0):
        result="inf"
    else:
        result=o1/o2
print(f"=Result is: {result}=")
