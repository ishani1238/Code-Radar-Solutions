#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int a=65;
        for(int j=1;j<=i;j++){
            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
        printf("\n");

    }
    return 0;
}
