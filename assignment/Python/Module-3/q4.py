numbers = [10, 20, 5, 30, 15]

if not numbers:
    largest = None
    smallest = None
    total_sum = 0
else:
    largest = max(numbers)  
    smallest = min(numbers)  
    total_sum = sum(numbers)

print("largest number:", largest)
print("smallest number:", smallest)
print("sum of all numbers:", total_sum)
