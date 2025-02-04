#include <stdio.h>
int main(){
int a,b;
char operator;
scanf("%d %d %c", &a,&b &operator);
if(operator == '+'){
    printf("%d",a + b);
}else if( operator == '-'){
    printf("%d",a - b);
}else if( operator == '*'){
    printf("%d",a * b);
}else if(operator == '/'){
    if(b == 0){
        printf("error\n");
    }else{
        printf("%d", a / b);
    }
}else{
    printf("error\n");
}
return 0;
}