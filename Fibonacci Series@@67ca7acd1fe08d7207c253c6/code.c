#include<stdio.h>
int fibonacciSeries(int n){
    if(n<=0){
        printf("Invalid input\n");
        return -1;
    }
    if(n<=1) return 0;
    if(n<=2) return 0;
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}

