def insert(original, to_insert):
    middle_index = len(original) // 2
    return original[:middle_index] + to_insert + original[middle_index:]

string = input("enter the original string: ")
string_to_insert = input("enter the string to insert: ")
result = insert(string, string_to_insert)
print("Resulting string:", result)
