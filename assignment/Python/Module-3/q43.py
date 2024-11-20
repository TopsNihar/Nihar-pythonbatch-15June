names = ["aaa" , "bbb", "ccc"]
ages = [12,13,14]
z = list(zip(names,ages))

print(z)

name,age = zip(*z)
print(name,age)

dictionary = dict(zip(name,age))

print(dictionary)