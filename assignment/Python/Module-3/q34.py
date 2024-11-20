dict1 = {'a': 1,
         'b': 2,
         'c': 3, 
         'd': 4, 
         'e': 1, 
         'f': 2}

check = "c"

if dict1.get(check) is not None:
    print("okey")
else:
    print("not okey")