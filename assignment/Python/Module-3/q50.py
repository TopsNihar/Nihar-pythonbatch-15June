def check (num):
    if num < 0 :
        return 1
    else :
        sum = 0
        for i in range(1,num):
            if num % i == 0 :
                sum += i
        return sum == num

num = input("enter a number :")
num = int(num)

if check(num):
    print("num is perfect")
else :
    print("num is not perfect")    