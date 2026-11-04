#include <stdio.h>

int main() {
    int n, k, baris, j, jumlah, total = 0;
    scanf("%d %d", &n, &k);

    for (baris = 1; baris <= n; baris++) {
        jumlah = 0;
        for (j = baris; j >= 1; j--) {
            printf("(%d * %d)", j, k);
            if (j > 1)
                printf(" + ");
            jumlah += j * k;
        }
        printf(" = %d\n", jumlah);
        total += jumlah;
    }
    printf("%d\n", total);
    return 0;
}