#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=N;i>0;i--){
        int a =65;
        for(int j=1;j<=(N+1)-i;j++){
            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}