/*
Nama    : Sheren Aura Vi Paramitha
NIM     : 2802444246
*/

#include <stdio.h>

int main()
{
    int baris, kolom;
    int i, j,k;
    
    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);
    
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &kolom);
    
    for(i = 1 ; i <= baris ; i++) {
        // spasi
        for(j = 1 ; j < i ; j++) {
            printf(" ");
        }
        
        // bintang
        for(k = 1 ; k <= kolom ; k++) {
            printf("*");
        }
        
        printf("\n");
    }
}