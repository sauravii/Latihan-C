#include <stdio.h>

int main()
{
   int lengthArray, i, j, k;

   // panjang array
   printf("Masukkan panjang array:");
   scanf("%d", &lengthArray);
   
   int arr[lengthArray];
   
   // looping input angka
   for(i = 0 ; i < lengthArray ; i++) {
       printf("Masukkan angka untuk index ke-%d:", i);
       scanf("%d", &arr[i]);
   }
   
   printf("\n");
   
   // tampilkan urutan awal
   printf("Urutan angkanya adalah:\n");
   for(j = 0 ; j <lengthArray ; j++) {
       printf("%d ", arr[j]);
   }
   
   printf("\n\n");
   
   // tampilkan reveser angka
   printf("Urutan reversenya adalah:\n");
   for(k = lengthArray - 1 ; k >= 0 ;k--) {
       printf("%d ", arr[k]);
   }
   
}