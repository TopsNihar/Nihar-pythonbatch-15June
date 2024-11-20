string = 'w3resource'

dict1 = {}

for i in string :
    if i in dict1:
        dict1[i] += 1
    else :
        dict1[i] = len(i)


print(dict1)  