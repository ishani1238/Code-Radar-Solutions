#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if('A'<a <= 'Z'){
        printf("Uppercase\n");
    }else{
        printf("Lowercase\n");
    }
    return 0;
}