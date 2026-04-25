"""
Berilgan qavslar to'g'ri joylashtirilganligini tekshiring.
"""

def is_valid(matn:str)->bool:
    stek = []
    for belgi in matn:
        if belgi == '(':
            stek.append(belgi)
        elif belgi == ')':
            if not stek:
                return False
            stek.pop()

    return len(stek) == 0
