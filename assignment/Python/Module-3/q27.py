tuple = (1,2,3,1,4,5,6,5,6,8,9,7,6,0)
repeted_value = []
seen_value = []

for item in tuple :
    if item in seen_value :
        if item not in repeted_value :
            repeted_value.append(item)
    else :
        seen_value.append(item)        
print(repeted_value)  