"""
Berilgan belgilar ro'yxatini teskari tartibga keltiring.
Xotira murakkabligi O(1) bo'lsin.
"""

def reverseString(s: list) -> None:
    left = 0
    right = len(s) - 1

    while left < right:
        # Yangi ro'yxat ochmasdan, bor elementlarning o'rnini almashtiramiz
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1

    return s