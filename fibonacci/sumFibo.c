#include <stdio.h>

// Fungsi rekursif untuk menghitung Fibonacci
int fibonacci(int n) {
    if (n == 0)      // Base case 1: F(0) = 0
        return 0;
    else if (n == 1) // Base case 2: F(1) = 1
        return 1;
    else             // Rekursi: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Fungsi untuk menjumlahkan deret Fibonacci
int sumFibonacci(int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += fibonacci(i); // Menjumlahkan setiap bilangan Fibonacci
    }
    return sum;
}

int main() {
    int n, i;
    
    // Meminta input dari user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    // Menampilkan deret Fibonacci
    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    
    int result = sumFibonacci(n);
    printf("Sum of Fibonacci series up to %d terms: %d\n", n, result);
    
    return 0;
}
