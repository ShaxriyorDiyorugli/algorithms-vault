#ARRAY BO'LIMIDAGI MASALALAR
"""
1. Sizga butun sonlardan iborat array va targetSum beriladi.
Arraydagi ikki turli son yig‘indisi targetSum'ga teng bo‘lsa,
ularni o‘sish tartibida qaytaradigan funksiya yozing.
"""
def twoNumberSum(array, targetSum):
    # setga o'tgazish orqali qidirishni ancha oshiramiz!
    seen = set()

    for num in array:
        complement = targetSum - num
        if complement in seen:
            #sorted funksiyasi orqali o'sish tartibida qaytaramiz!
            return sorted([num, complement])
        seen.add(num)

    # Agar juftlik topilmasa
    return []
