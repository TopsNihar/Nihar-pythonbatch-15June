list1 = [1, 2, 3, 4]
list2 = [4, 5, 6]

common = False

for item in list1:
    if item in list2:
        common = True
        break

print(common) 
