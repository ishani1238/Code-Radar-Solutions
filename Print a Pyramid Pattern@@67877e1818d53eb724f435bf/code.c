#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=(2*i)-1;j++){
            printf("*");
            
        }
        printf(" ");
        printf("\n");        
    }
    return 0;
}