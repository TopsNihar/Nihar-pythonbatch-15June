num=int(input("enter the number: "))
a=0
b=1
count=0

if num<0:
    print("input invalid.")
elif num==1:
    print(f"fibonacci is {num}:{a}")
else:
    print(f"fibonassi is {num}")
    while count < num:
        print(a,end=" ")
        a,b=b,a+b
        count+=1
