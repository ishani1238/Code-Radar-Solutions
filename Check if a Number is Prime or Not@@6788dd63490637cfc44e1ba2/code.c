#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 2; i <= n; i++){
        if(a % i == 0){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }
    return 0;
}