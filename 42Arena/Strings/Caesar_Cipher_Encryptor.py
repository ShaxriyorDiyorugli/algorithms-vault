"""
Kichik harflardan iborat matn va kalit berilgan.
Har bir harfni alifbo bo‘yicha k ta pozitsiyaga siljitib,
shifrlangan matn qaytaradigan funksiya yozing, bu yerda k — kalit qiymati.
💡 Harflar alifbo bo‘ylab "aylanib ketadi"; ya’ni,
z harfini bitta siljitsangiz, natijada a harfi chiqadi.
"""

def caesarCipherEncryptor(string:str, key:int)->str:
  result = ""
  key = key % 26

  for letter in string:
    new_code = ord(letter) - ord('a')
    new_code = (new_code + key) % 26
    result += chr(new_code + ord('a'))

  return result