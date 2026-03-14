#1masala qavslar
"""def is_valid(matn:str)->bool:
    stek = []
    for belgi in matn:
        if belgi == '(':
            stek.append(belgi)
        elif belgi == ')':
            if not stek:
                return False
            stek.pop()

    return len(stek) == 0

if __name__ == "__main__":
  matn = input("Matnni kiriting:")
  print(is_valid)"""

#2masala
"""import re

def runLengthEncoding(string):
    if not string:
        return ""
    shablon = r"(.)\1*"
    
    natija = []
    for moslik in re.finditer(shablon, string):
        belgi = moslik.group(1)
        takrorlar_soni = len(moslik.group(0))
        
        while takrorlar_soni > 0:
            hozirgi_son = min(takrorlar_soni, 9)
            natija.append(f"{hozirgi_son}{belgi}")
            takrorlar_soni -= hozirgi_son
            
    return "".join(natija)

if __name__=="__main__":
  string = input("Satr kiriting:")
  print(runLengthEncoding(string)) """