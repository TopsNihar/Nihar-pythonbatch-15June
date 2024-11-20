my_list = [5, 2, 9, 1, 5, 6]

unique = list(set(my_list))
unique.sort()

if len(unique) < 2:
    second_smallest = None
else:
    second_smallest = unique[1]

print("Second smallest number:", second_smallest)
