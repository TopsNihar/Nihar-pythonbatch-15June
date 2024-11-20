def check(num,start,end) :
    if num >=start and num <=end :
        print("num in range")
    else :
        print("num not in range:")    

num = input("enter a num :")
num = int(num) 
start = 1
end = 10
res = check(num,start,end)  