def linearSearch(array,key,index):
    if(index>len(array)):
        print("Element not found.")
    else:
        if(array[index] == key):
            print(f"Element found at index number {index}.")
        else:
            linearSearch(array,key,(index+1))
            
l = []
s = int(input("Enter the size of the array: "))
for i in range(s):
    e = int(input(f"Enter element {i+1}: "))
    l.append(e)
k = int(input("Enter key element: "))

linearSearch(l,k,0)