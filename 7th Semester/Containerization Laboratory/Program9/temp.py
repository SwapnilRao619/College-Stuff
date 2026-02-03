print("===Temperature Converter===\n")
choice=int(input("Menu:\n1.C->F\n2.F->C\n"))
num=float(input("Enter the temperature: "))
if(choice==1):
    result=32+((9/5)*num)
else:
    result=(num-32)*(5/9)
print(f"Result is: {result}")
