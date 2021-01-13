"""Sort a list"""

list = [int (e) for e in input("Enter numbers seperated by comma: ").split(',')]
print("\nYour Given List is", list)
sortedlist = sorted(list)
print("\nThe sorted list in ascending order is", sortedlist)
