#include <stdio.h>

int main() {
    int N, i, a = 0, b = 1, next;
    printf("Masukkan N: ");
    scanf("%d", &N);
    printf("%d %d ", a, b);
    for (i = 3; i <= N; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    return 0;
}
