def palindrome (string) :
    if string == string[::-1]:
        return True
    else:
        return False

str = input("enter a string :-")

if palindrome(str):
    print("palindrome")
else :
    print("not palindrome")    