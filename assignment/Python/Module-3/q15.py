# Write a Python program to get unique values from a list


list=[1,2,6,55,8,45,2,5,8,2,58,42,5,52,5,2]

unique=[]

for i in list:
    if i not in unique:
        unique.append(i)

print(unique)