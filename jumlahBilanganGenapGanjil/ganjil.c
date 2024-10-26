#include <stdio.h>

int main() {
    int N, i, jumlah = 0;
    printf("Masukkan N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i += 2) {
        jumlah += i;
    }
    printf("Jumlah bilangan ganjil dari 1 hingga %d adalah %d\n", N, jumlah);
    return 0;
}
