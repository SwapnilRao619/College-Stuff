class Student():
    def __init__(self,name,usn):
        self.name = name
        self.usn = usn
        self.list=[]
    
    def getmarks(self):
        print("Enter marks of the student:\n")
        for i in range(3):
            self.list.append(int(input(f"Subject {i+1}: ")))
    
    def display(self):
        maxmarks = int(input("Enter max marks: "))
        sum = 0
        for i in self.list:
            sum += i
        percentage = ((sum/maxmarks)*100)
        print(f"Name: {self.name}")
        print(f"USN: {self.usn}")
        print(f"Marks: {self.list}")
        print(f"Total Marks: {sum}")
        print(f"Max Marks: {maxmarks}")
        print(f"Percentage: {percentage}")

name = input("Enter your name: ")
usn = input("Enter your USN: ")
s = Student(name,usn)
s.getmarks()
print("\n")
s.display()
