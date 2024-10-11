s = "tops technology"

for char in s: 
    count = 0
    for ch in s: 
        if char == ch:
            count += 1
    if s.count(char) == count: 
        print(char, ":", count)
