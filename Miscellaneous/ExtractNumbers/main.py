import re

FILENAME = 'C:/Users/NoteService/Desktop/matn.txt'

try:
    with open(FILENAME, 'r', encoding='UTF-8') as f:
        matn = f.read()
        numbers = re.findall(r'\d+', matn)
        for num in numbers:
            print(num)
        print()
        print(len(numbers))
except FileNotFoundError:
    print("This file is not")
