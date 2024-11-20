import random

def read_random_line(file_path):
    with open(file_path) as file:
        lines = file.readlines()
        return random.choice(lines).strip() if lines else "The file is empty."

file_path = 'your_file.txt' 
print(read_random_line(file_path))