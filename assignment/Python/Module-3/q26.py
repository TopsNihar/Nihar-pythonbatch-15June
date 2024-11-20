tuple1 = [(1,2,3,4),(5,6,7),(8,9,0)]

replace_tuple = []

for t in tuple1 :
    temp = list(t)
    temp[-1] = 0
    replace_tuple.append(tuple(temp))
print(replace_tuple)