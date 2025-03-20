#include<stdio.h>
int main(){
    int n, b, bit_value;
    scanf("%d %d",&n,&b);
    if (n &(1<<b)){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}