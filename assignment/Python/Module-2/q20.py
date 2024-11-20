string = "this is python batch"
words = string.split()
big= 0
for i in words :
    if len(i) > big :
        big = len(i)
print(big)
    