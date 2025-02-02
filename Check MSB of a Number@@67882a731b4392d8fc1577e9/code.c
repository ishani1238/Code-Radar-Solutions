#include <stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    if(a >> 31){
        printf("Set\n");
    }else{
        printf("Not Set\n");
    }
    return 0;
}