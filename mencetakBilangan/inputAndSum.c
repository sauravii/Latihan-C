#include <stdio.h>

int main() {
    int N, i;
    int sum = 0;
    
    printf("Masukkan N: ");
    scanf("%d", &N);
    
    int angka[N];
    
    // menyimpan di array
    for (i = 1; i <= N; i++) {
        angka[i] = i ;  
    }
    
    // mencetak angka
    printf("Angkanya adalah \n");
    for (i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    // looping utk sum nya
    for (i = 1; i<= N;i++) {
        sum += angka[i];
    }
    
    printf("Jumlah angkanya adalah: %d\n", sum);
    return 0;
}
