#ARRAY BO'LIMIDAGI MASALALAR
"""
1. Sizga butun sonlardan iborat array va targetSum beriladi.
Arraydagi ikki turli son yig‘indisi targetSum'ga teng bo‘lsa,
ularni o‘sish tartibida qaytaradigan funksiya yozing.
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
"""

"""
2. Berilgan sonlar ro'yxatidagi nollarni ro'yxat orqasiga o'tkazing,
 lekin boshqa elementlar ketma-ketligi buzilmasin.
Imkon qadar kamroq amal bajaring.
Qo'shimcha xotiradan foydalanmang - 
amallarni ro'yxat ustida bajaring.


def moveZeroes(nums: list) -> list:
    non_zero_pos = 0

    for i in range(len(nums)):
        if nums[i] != 0:
            nums[non_zero_pos] = nums[i]
            non_zero_pos += 1

    for i in range(non_zero_pos, len(nums)):
        nums[i] = 0

    return nums 
"""

"""
3.Ikkita butun sonlardan iborat array beriladi. 
Ikkinchi array birinchining ketma-ket qismi ekanini aniqlovchi
 funksiya yozing.
Ketma-ket qism — bu elementlari tartib bilan uchraydigan, 
lekin yonma-yon bo‘lishi shart bo‘lmagan qator.
Masalan, [1, 3, 4] sonlari [1, 2, 3, 4] arrayining ketma-ket 
qismi hisoblanadi, [2, 4] ham shunday. Shuningdek, 
bitta son yoki arrayning o‘zi ham ketma-ket qism bo‘lishi mumkin.
"""

def isValidSubsequence(array, sequence):
    seq_index = 0

    for num in array:
        if seq_index < len(sequence) and num == sequence[seq_index]:
            seq_index += 1
        if seq_index == len(sequence):
            return True

    return seq_index == len(sequence)