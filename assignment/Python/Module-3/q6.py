string = ["hello", "abc", "xyx", "a", "ab", "aba", "12321", "noon", "not"]

count = 0

for s in string:
    if len(s) >= 2 and s[0] == s[-1]:
        count += 1

print("the string count is:", count)
