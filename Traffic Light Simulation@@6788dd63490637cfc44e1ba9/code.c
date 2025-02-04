#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a == 'R' || a == 'r'){
        printf("Stop\n";)
    }else if(a == 'G' || a == 'g'){
        printf("Go\n");
    }else if(a == 'Y' || a == 'y'){
        printf("Slow Down\n");
    }else{
        printf("Invalid input\n");
    }
    return 0;
}