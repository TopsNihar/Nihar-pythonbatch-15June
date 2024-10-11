string = input("enter a string: ")

if len(string) < 2:
    result = ""
else:
    result = string[:2] + string[-2:]

print("Resulting string:", result)
