"""
1. Masala
So'z qabul qilib, u so'z palindromligini tekshiradigan funksiya yozing.
Palindrom bo‘lsa — true, aks holda false qiymatini qaytarsin.
💡 Palindrom — bu oldindan ham, orqadan ham bir xil o‘qiladigan so'z.
E’tibor bering: bitta belgidan iborat so'zlar ham palindrom hisoblanadi.
"""

def isPalindrome(string: str) -> bool:
    if string == string[::-1]:
      return True
    else:
      return False
if __name__ == "__main__":
  text = input("Enter a word: ")
  print(isPalindrome(text))