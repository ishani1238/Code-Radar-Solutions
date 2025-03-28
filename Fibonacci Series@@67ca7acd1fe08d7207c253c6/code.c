#include <stdio.h>

void fibonacciSeries(int n) {
    if (n <= 0) {
        printf("Invalid input\n");
        return;
    }

    int a = 0, b = 1, temp;
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
}



