#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i =1; i<= N,i++){
        printf("%d",i);
        for(int j =1; j = i, j++){
            printf("%d",j);
        }
        printf(" ");
    }
    return 0;
}