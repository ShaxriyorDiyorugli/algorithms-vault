"""
                                      Run-Length kodlash
Matn qabul qiladigan funksiyani yozing va uning run-length bo‘yicha kodlangan ko‘rinishini qaytaring.
💡 Run length kodlash haqida o‘rganib chiqing: Wikipedia — Run-length encoding
Ushbu masala uchun ketma-ketlik degani — bir xil belgilar ketma-ketligi.
Masalan, "AAA" kabi ketma-ketlik "3A" ko‘rinishida kodlanadi.
💡 Matnda raqamlar ham bo'lishi mumkin.
💡 Kodlangan ma’lumot qayta tiklanadigan bo‘lishi kerak.
💡 10 yoki undan ortiq belgidan iborat ketma-ketliklar bo‘linib yozilishi kerak.
Masalan, "AAAAAAAAAAAA" (ya’ni 12 ta A) satrini "9A3A" sifatida kodlanadi.
"""

def runLengthEncoding(string):
    natija = []
    hozirgi_uzunlik = 1

    for i in range(1, len(string)):
        # Agar oldingi harf hozirgisiga teng bo'lmasa
        # YOKI sanagich 9 ga yetgan bo'lsa
        if string[i] != string[i-1] or hozirgi_uzunlik == 9:
            natija.append(str(hozirgi_uzunlik))
            natija.append(string[i-1])
            hozirgi_uzunlik = 0 # Yangi harf uchun nollaymiz

        hozirgi_uzunlik += 1

    # Oxirgi guruhni qo'shib qo'yamiz
    natija.append(str(hozirgi_uzunlik))
    natija.append(string[-1])

    return "".join(natija)

