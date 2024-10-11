def reverse(s):
    if len(s) % 4 == 0:
        return s[::-1]  
    else:
        return s  
    
string = input("enter a string: ")
print(reverse(string))
