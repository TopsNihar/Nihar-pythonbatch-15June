data = [
    {'item': 'item1', 'amount': 400},
    {'item': 'item2', 'amount': 300},
    {'item': 'item1', 'amount': 750}
]
amounts = {}
for i in data :
    item = i["item"]
    amount = i["amount"]
    if item in amounts:
        amounts[item] += amount
    else :
        amounts[item] = amount  
print(amounts)