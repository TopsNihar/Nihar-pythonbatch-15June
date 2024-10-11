sentance1 = input("enter the first sentasnce :")
sentance2 = input("enter the second sentance :")

if len(sentance1) < 2 or len(sentance2) <2:
    print("enter atleast 2 character.")
else:
    swap1 = sentance1[:2] + sentance1[2:]
    swap2 = sentance2[:2] + sentance2[2:]

    res = swap1+' '+swap2
    print("res:",res)