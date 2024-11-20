str = input("Enter a string: ")

find1 = str.find("not")
find2 = str.find("poor")
    
if find1 != -1 and find2 != -1 and find1 < find2:
    result = str[:find1] + 'good' + str[find2 + 4:]
else:
    result = str

print("string:", result)
