#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int a=1;
        for(int k=1;k<=N-i;k++){
            printf(" ");
        }
        for(int j=1;j<=(2*i)-1;j++){
                printf("%d",a);
                a--;

        }
        printf("\n");
    }
    return 0;
}