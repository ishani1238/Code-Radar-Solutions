#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a ,&b , &c);
    if(a + b > c && a + c > b && b + c > a){
        if(a == b && b == c && c == a){
            printf("equilateral\n");
        }else if(a == b || a == c || b == a){
            printf("Isosceles\n");
        }else{
            printf("Scalene\n");
        }
    }
    return 0;
}