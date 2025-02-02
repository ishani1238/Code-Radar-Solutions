#include <stdio.h>
int main(){
    int a,b;
    scanf("%d\n",&a,&b);
    if(a ^ b){
        printf("Set\n");
    }else{
        printf("Not Set\n");
    }
    return 0;
}