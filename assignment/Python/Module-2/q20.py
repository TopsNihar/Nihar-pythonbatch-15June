def long_len(words):
    if not words:
        return 0
    
    max_len = max(len(word) for word in words)
    return max_len

word_list=["apple","banna","chiku","cherry"]
leng = long_len(word_list)
print("long length is :",leng)