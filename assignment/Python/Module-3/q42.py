dict1 = {"a" : 5 ,"b" : 4 , "c" : 3 , "d" : 3 , "e" : 5} 

values = dict1.values()

result = []

for i in values :
    if i not in result :
        result.append(i)

print(result) 