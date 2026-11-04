pilihan = 0
while pilihan != 5:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan : "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator AgameruFirasNugraha")
    elif pilihan < 1 or pilihan > 4:
        print("Input anda salah, silahkan coba lagi")
    else:
        x = float(input("Masukkan nilai pertama : "))
        y = float(input("Masukkan nilai kedua : "))
        if pilihan == 1:
            print("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f" % (x, y, x + y))
        elif pilihan == 2:
            print("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f" % (x, y, x - y))
        elif pilihan == 3:
            print("Hasil perkalian antara %.2f dengan %.2f adalah %.2f" % (x, y, x * y))
        elif y == 0:
            print("Pembagian dengan nol tidak bisa dilakukan")
        else:
            print("Hasil pembagian antara %.2f dengan %.2f adalah %.2f" % (x, y, x / y))