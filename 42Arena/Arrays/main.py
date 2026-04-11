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
"""

def moveZeroes(nums: list) -> list:
    non_zero_pos = 0

    for i in range(len(nums)):
        if nums[i] != 0:
            nums[non_zero_pos] = nums[i]
            non_zero_pos += 1

    for i in range(non_zero_pos, len(nums)):
        nums[i] = 0

    return nums