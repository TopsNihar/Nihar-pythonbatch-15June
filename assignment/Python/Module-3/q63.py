num = int(input("enter a number value :"))

total = 0

for i in range(1,num // 2 +1):
    if num % i == 0 :
        total += i

total += num

print(total)