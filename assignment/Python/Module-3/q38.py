dict1 = {"a" : 5 ,"b" : 4 , "c" : 3 , "d" : 3 , "e" : 5} 

check = ["c" , "d" , "z"]

flag = True

for c in check :
    if c not in dict1 :
        flag = False
        break

if flag :
    print("all keys exist")
else :
    print("not all key exist")        