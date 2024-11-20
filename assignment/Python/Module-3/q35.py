dict1 = {"a" : 5 ,"b" : 4 , "c" : 3 , "d" : 3 , "e" : 5} 

k = dict1.keys()
print(k)

val = dict1.values()
print(val)

for keys , value in dict1.items():
    print(f"key {keys} : value {value}")