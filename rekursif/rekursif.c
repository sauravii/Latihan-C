#include <stdio.h>

int main()
{
    int inputMenu;
    printf("Serba serbi rekursi\n");
    printf("====================\n");
    printf("1. Deret Fibonacci\n");
    printf("2. Bilangan Natural\n");
    printf("3. Permutasi\n");
    printf("4. Kombinasi\n");
    printf("5. Keluar\n");
    printf("Pilihan Menu: ");
    scanf("%d", &inputMenu);
    
    int fibo(int n) {
        if(n == 0) {
            return n;
        } else if(n == 1) {
            return 1;
        } else {
            return fibo(n-1) + fibo(n-2);
        }
    }
    
    int sumBil(int n) {
        if(n == 0) {
            return 0;
        } else {
            return n + sumBil(n - 1);
        }
    }
    
    switch(inputMenu) {
        case 1: {
            int angkaFibo, i;
            printf("Masukkan angka n: ");
            scanf("%d", &angkaFibo);
            
            for(i = 0 ; i < angkaFibo ; i++) {
                printf("%d ", fibo(i));
            }
            
            break;
        }
        case 2: {
           
            int inputAngka, j;
            printf("Masukkan angka N: ");
            scanf("%d", &inputAngka);
            
            printf("Bilangan natural hingga %d = ", inputAngka);
            for(j = 1 ; j <= inputAngka ; j++) {
                printf("%d ", j);
            }
            
            printf("\n");
            
            int result = sumBil(j-1);
            printf("Jumlah dari baris bilangan natural = %d", result);
            
            break;
        } 
        case 3: {
        
            break;
        }
        case 4: {
            
            break;
        }
        case 5: {
            break;
        }
    }
}