#include<stdio.h>
int main(){
    int n, b, bit_value;
    scanf("%d %d",&n,&b);
    if (n & 1 == 1){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}