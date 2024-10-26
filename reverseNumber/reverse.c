#include <stdio.h>

int main()
{
    int arr[9] = {34, 23, 78, 9, 10, 11, 23, 65, 87};
    int i, j;
    
    // cetak urutan awal
    printf("Urutan awalnya adalah :\n");
    for(i = 0 ; i < 9 ; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");
    
    // cetak reversenya
    printf("Urutan reversenya adalah:\n");
    for(j = 8 ; j >= 0 ; j--) {
        printf("%d ", arr[j]);
    }
}