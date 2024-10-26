#include <stdio.h>

int main()
{
    int inputMenu;
    printf("Menu Navigasi\n");
    printf("1. Positive or Negative\n");
    printf("2. Grading\n");
    printf("3. Largest Number\n");
    printf("Pilihan Menu: ");
    scanf("%d", &inputMenu);
    
    switch(inputMenu) {
        case 1: {
            int angka[3];
            int i, j;
            
            printf("Masukkan 3 Angka: ");
            for(i = 0 ; i < 3 ; i++) {
                scanf("%d", &angka[i]);
            }
            
            int countNegatif = 0;
            for(j = 0 ; j < 3 ; j++) {
                if(angka[j] < 0) {
                    countNegatif++;
                }
            }
            
            if(countNegatif == 0) {
                printf("Tidak ada negatif\n");
            } else if(countNegatif == 1) {
                printf("1 angka negatif\n");
            } else if(countNegatif == 2) {
                printf("2 angka negatif\n");
            } else if(countNegatif == 3) {
                printf("3 angka negatif\n");
            } else {
                printf("Tidak ada\n");
            }
            
            break;
        }
        case 2: {
            int nilai;
            printf("Menu nilai\n");
            printf("Masukkan nilai: ");
            scanf("%d", &nilai);
            
            if(nilai >= 85) {
                printf("Grade A");
            } else if(nilai >= 70) {
                printf("Grade B");
            } else if(nilai >= 65) {
                printf("Grade C");
            } else if(nilai >= 50) {
                printf("Grade D");
            } else {
                printf("Grade E");
            }
            
            break;
        } 
        case 3: {
            int angka[3];
            int i;
            
            printf("Masukkan 3 Angka: ");
            for(i = 0 ; i < 3 ; i++) {
                scanf("%d", &angka[i]);
            }
            
            int largestNumber = angka[0];
            for(i = 0 ; i < 3 ; i++) {
                if(angka[i] > largestNumber) {
                    largestNumber = angka[i];
                }
            }
            
            printf("%d", largestNumber);
            
            break;
        }
    }
}