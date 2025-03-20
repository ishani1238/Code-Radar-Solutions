#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        int b=0;
        if(n&(1<<b)){
            printf("%d",b);
        b++;
    }
    }
    return 0;
}