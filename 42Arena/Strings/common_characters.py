def commonCharacters(strings):
    if not strings:
        return []

    # Birinchi satrdagi barcha belgilarni to'plamga o'tkazamiz
    umumiy_belgilar = set(strings[0])

    # Qolgan satrlar bilan kesishmani topamiz
    for satr in strings[1:]:
        umumiy_belgilar &= set(satr)

    return sorted(list(umumiy_belgilar))
