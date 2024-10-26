/*
Kode ini mendapatkan panjang arraynya dari user input sehingga bisa lebih dinamis
*/

#include <stdio.h>
// #define N 5  atau bisa menggunakan ini, kemudian untuk loopingnya batasnya menggunakan N

int main()
{
    int testCase;
    int userInput[testCase], i, a;
    
    printf("Masukkan panjang array: ");
    scanf("%d", &testCase);
    
    // buat input user selama 5x
    for(i = 0 ; i < testCase ; i++) {
        printf("Enter the input for index %d :", i);
        scanf("%d", &userInput[i]);
    }
    
    // buat print hasilnya
    printf("Hasil arraynya adalah :\n");
    for(a = 0 ; a < testCase ; a++) {
        printf("%d", userInput[a]);
    }

    return 0;
}