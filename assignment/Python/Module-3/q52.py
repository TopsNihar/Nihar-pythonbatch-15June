result = len("Hello, World!")
print(result)
def formate(name):
    return f"Hello, {name}!"

print(format("nihar"))
add = lambda x, y: x + y
print(add(5,3))
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

print(factorial(5))


def add(a, b):
    print(a + b)
add(10, 20)

def add(a, b, c):
    print(a + b + c)
add(10, 20, 30) 


def bill(tomato, potato=100):
    print("Total = ", tomato + potato)

bill(50, 30)



def add(*nums):
    print(sum(nums))

add(653, 4567, 23, 7, 384, 678446)


def bill(**products):
    total = 0
    for item, price in products.items():
        print(f"{item} : {price}")
        total += price
    print("-"*40)
    print("Total amount: ", total)
    print("GST: ", total * 0.05)
    print("Final amount: ", total + (total * 0.05))

bill(pen=100, book=30, milk=33)