data = {'1': ['a', 'b'], '2': ['c', 'd']}

keys = list(data.keys())

lists = [data[key] for key in keys]

result = [] 
 
for l1 in lists[0] :
    for l2 in lists[1]:
        result.append(l1+l2) 

for combo in result:
    print(combo)     