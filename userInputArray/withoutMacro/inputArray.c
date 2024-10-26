/*
Kode ini mendapatkan panjang arraynya dengan sudah mendefinisikannya diawal
*/

#include <stdio.h>

int main()
{
    int userInput[5], i, a;
    
    // buat input user selama 5x
    for(i = 0 ; i < 5 ; i++) {
        printf("Enter the input for index %d :", i);
        scanf("%d", &userInput[i]); //menyimpan array input ke dalam variabel userInput dengan index iterasi i
    }
    
    // buat print hasilnya
    printf("Hasil arraynya adalah :");
    for(a = 0 ; a < 5 ; a++) {
        printf("%d\n", userInput[a]); //mencetak element di array userInput sesuai index iterasi a
    }

    return 0;
}