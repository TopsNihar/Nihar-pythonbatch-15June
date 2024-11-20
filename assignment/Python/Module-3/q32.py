my_dict = {'a': 3, 'b': 1, 'c': 2, 'd': 4}

sortedasc = {}
sorteddes = {}

for key in sorted(my_dict,key=my_dict.get):
    sortedasc[key] = my_dict[key]
print(sortedasc)  

for key in sorted(my_dict,key=my_dict.get,reverse=True):
    sorteddes[key] = my_dict[key]
print(sorteddes)