#include,stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b = 0;
    for(int i=0,i<=n,i++){
        if(n&1 == 1){
            printf("%d",b);
        }else{
            printf("%d",b);
            b++;
        }
    }
    return 0;
}