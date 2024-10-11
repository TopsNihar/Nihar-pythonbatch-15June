input_string = input("enter the string :")

not_index = input_string.find('not')
poor_index = input_string.find('poor')

if not_index != -1 and poor_index != -1 and not_index < poor_index :
    result_string = input_string[:not_index] + 'good' + input_string[poor_index + len('poor'):]
else:
    result_string = input_string
print("resluting string :",result_string)
