#include<stdio.h>
#include<math.h>
int isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = (int) sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
/**
 * Ham main
 */
int main() {
 int i, n;
    printf("Nhap n = ");
    scanf("%d", &n);
    for (i = n; i < 100; i++) {
        if (isPrimeNumber(i) == 1) {
        	break;
        }
        printf("%d ", i);
    }
}
