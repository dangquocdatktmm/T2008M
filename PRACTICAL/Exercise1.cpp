#include <stdio.h>
int main() {
    int i, F0 = 0, F1 = 1, next;
    printf("Fibonacci series between 1 and 100: ");

    for (i = 0; i <= 99; ++i) {
        printf("%d, ", F0);
        next = F0 + F1;
        F0 = F1;
        F1 = next;
        if (F0>100){
        	break;
    }
}
}
