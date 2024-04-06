l = [1,2,3,4]

# (a)Inserting an element:
l.insert(3,5)
print(f"List after inserting the element 5 at index position 3: {l}")

# (b)Removing an element: 
l.remove(5)
print(f"List after removing the element 5 from it: {l}")

# (c)Appending an element:
l.append(5)
l.append(6)
l.append(7)
print(f"List after appending the elements 5,6 and 7 to it: {l}")

# (d)Displaying the length of the list:
print(f"Length of the list: {len(l)}")

# (e)Popping an element: 
l.pop()
print(f"List after popping the last element 7 from it: {l}")

# (f)Clearing the list:
l.clear()
print(f"List after being cleared: {l}")