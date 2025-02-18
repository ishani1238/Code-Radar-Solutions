#include<stdio.h>
int main(){
    int n, isPrime = 1;
    scanf("%d",&n);
    if( a <=1){
        printf("Not Prime\n");
        return 0;
    }
    for(int i = 2; i < n; i++){
        if(a % i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
        return 0;
    }
    
        
            
    return 0;
}