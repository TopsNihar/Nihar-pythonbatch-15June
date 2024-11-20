dict1 = {"a":1, "b":2}
dict2 = {"c":3, "d":4}
dict3 = {"e":1, "f":2}

dict1.update(dict2)
dict1.update(dict3)

print(dict1)

new_dict = {**dict1 , **dict2, **dict3}

new_dict1 = dict1 | dict2 | dict3

print(new_dict)
print(new_dict1)