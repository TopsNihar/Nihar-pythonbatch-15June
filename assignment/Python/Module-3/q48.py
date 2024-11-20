def factorial(num):
    if num == 0 and num < 0:
        return 1
    else :
        fact = 1
        for i in range(1,num+1):
            fact *= i
        return fact
    
num = input("enter num :")
num = int(num)
res = factorial(num)
print(res)