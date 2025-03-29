#include<stdio.h>
int main(){
    int pallindrome=1;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            pallindrome=0;
            break;
        }

    }
    if(pallindrome){
        printf("YES");

    }else{
        printf("NO");
    }
    return 0;
}
