#include <stdio.h>

int main() {
    int pilihan = 0;
    float x, y;

    while (pilihan != 5) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator AgameruFirasNugraha\n");
        } else if (pilihan < 1 || pilihan > 4) {
            printf("Input anda salah, silahkan coba lagi\n");
        } else {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &x);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &y);
            if (pilihan == 1)
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", x, y, x + y);
            else if (pilihan == 2)
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", x, y, x - y);
            else if (pilihan == 3)
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", x, y, x * y);
            else if (y == 0)
                printf("Pembagian dengan nol tidak bisa dilakukan\n");
            else
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", x, y, x / y);
        }
    }
    return 0;
}