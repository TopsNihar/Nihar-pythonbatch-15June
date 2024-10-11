input_string = input("enter the atleast 3 character :")

if len(input_string) >= 3:
    if input_string[-3:] == 'ing':
        output_string = input_string + 'ly'
    else :
        output_string=input_string + 'ing'
else:
    output_string = input_string

print("modify words is :",output_string)




