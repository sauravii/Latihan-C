#include <stdio.h>

int fpb(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// KPK
int kpk(int x, int y) {
    return (x * y) / fpb(x, y);
}

int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    printf("KPK dari %d dan %d adalah %d\n", x, y, kpk(x, y));
    
    return 0;
}
