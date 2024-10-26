#include <stdio.h>

int main()
{
    int matkul;
    char grade;
    int totNilai = 0, totSks = 0;
    float ipk;

    int sks[5] = {4, 2, 3, 4, 4};  

    printf("Masukkan jumlah mata kuliah: ");
    scanf("%d", &matkul);

    for (int i = 0; i < matkul; i++) {
        printf("Mata kuliah %d (SKS = %d):\n", i + 1, sks[i]);

        printf("Masukkan grade (A=4, B=3, C=2, D=1, E=0): ");
        scanf(" %c", &grade);

        int nilai;
        switch (grade) {
            case 'A': 
                nilai = 4; 
                break;
            case 'B': 
                nilai = 3; 
                break;
            case 'C': 
                nilai = 2; 
                break;
            case 'D': 
                nilai = 1; 
                break;
            case 'E': 
                nilai = 0; 
                break;
            default:
                printf("Grade tidak valid. Masukkan lagi.\n");
                i--;
                continue;
        }

        totNilai += nilai * sks[i];
        totSks += sks[i];
    }

    ipk = (float)totNilai / totSks;

    printf("\nIPK: %.2f\n", ipk);

    if (ipk >= 3.0 && ipk <= 4) {
        printf("Selamat, pertahankan!\n");
    } 
    else if (ipk >= 2.0 && ipk < 3.0) {
        printf("Ayo lebih giat!\n");
    } 
    else if (ipk >= 0 && ipk < 2.0) {
        printf("Ayo, sudah ketinggalan!\n");
    }

    return 0;
}