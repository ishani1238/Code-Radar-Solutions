#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(i ==N/2+1 || j == i+1){
            printf("* ");
        }else{
            printf("\n");
        }
        }

    }
    return 0;
}