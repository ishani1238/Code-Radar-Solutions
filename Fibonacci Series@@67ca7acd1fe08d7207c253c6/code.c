#include<stdio.h>
int fibonacciseries(int n){
    if(n<=0){
        printf("Invalid input\n");
    }
    if(n<=1) return 1;
    return fibonacciseries(n-1)+fibonacciseries(n-2);
}
