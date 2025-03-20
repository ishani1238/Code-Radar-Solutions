#include<stdio.h>
int main(){
    int n, b, bit_value;
    scanf("%d %d",&n,&b);
    if (b & 1 == 1){
        printf("0");
    }else{
        printf("1");
    }
    return 0;
}