#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1; i<=; i++){
        for(int j = 1;j<=N;j++){
            if(i==1 || i == N-1 || j ==1 || j == N-1){
                printf("* ");
            } else {
                printf(" ");
        }
    }
    printf("\n");
   
}
return 0;
}