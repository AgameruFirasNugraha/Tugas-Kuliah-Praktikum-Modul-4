#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int a, b, i, n;
    scanf("%d %d", &a, &b);
    n = abs(a - b);   
 
    for (i = 0; i <= n; i++) {
        if (a < b)
            printf("%d %d", a + i, b - i);
        else
            printf("%d %d", a - i, b + i);
        if (i < n)
            printf(" - ");
    }
    return 0;
}