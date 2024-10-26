#include <stdio.h>

int main() {
    int N, i, faktorial = 1;

    printf("Masukkan N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        faktorial *= i;
    }
    
    printf("Faktorial dari %d adalah %d\n", N, faktorial);
    return 0;
}
