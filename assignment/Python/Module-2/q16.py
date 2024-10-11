line = input("enter a string: ")

word_count = {}

words = line.split()

for word in words:
    word = word.lower()
    if word in word_count:
        word_count[word] += 1
    else:
        word_count[word] = 1

print("word occure:")
for word, count in word_count.items():
    print(f"{word}: {count}")
