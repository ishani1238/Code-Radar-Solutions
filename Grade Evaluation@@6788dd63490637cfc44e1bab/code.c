#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n") ;
            break;
         case 'E':
            printf("Fail\n"); 
            break;
        deafult:
            printf("Invalid grade\n");
            break;    
    }
    return 0;
}