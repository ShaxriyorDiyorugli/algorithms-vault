"""
Biz so'zda ishlatilgan katta harflarni quyidagi holatlarda to'g'ri deb hisoblaymiz:

Faqat birinchi harfi katta. Masalan, "Salom".
Birorta harfi ham katta emas. Masalan, "olma".
Barcha harflari katta. Masalan, "UZB".
Berilgan so'zdagi katta harflar to'g'ri ishlatilganligini tekshiring.

"""

#1 method
def detectCapitalUse(word: str) -> bool:
    return word.isupper() or word.islower() or word.istitle()
#2 method
def detectCapitalUse(word: str) -> bool:
    count = 0
    n = len(word)

    for i in range(n):
        if 65 <= ord(word[i]) <= 90:
            count += 1
    if count == n:
        return True
    if count == 0:
        return True
    if count == 1 and 65 <= ord(word[0]) <= 90:
        return True

    return False


