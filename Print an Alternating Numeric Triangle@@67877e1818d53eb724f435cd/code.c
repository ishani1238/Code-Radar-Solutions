#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a=1;
    int b=0;
    for(int i=1;i<=N;i++){
        for(int j =1;j<=i;j++){
            if((i+j)%2==0){
                printf("%d ",a);
            }else{
                printf("%d ",b);
            }

        }
        printf("\n");
    }
    return 0;
}