string = "hello python student you all are python student"

substring = "python student"

count = 0
sub_length = len(substring)
length = len(string)

for i in range(length - sub_length + 1): 
    if string[i:i + sub_length] == substring: 
        count += 1 

print(f"substring '{substring}' match {count} times in the string.")
