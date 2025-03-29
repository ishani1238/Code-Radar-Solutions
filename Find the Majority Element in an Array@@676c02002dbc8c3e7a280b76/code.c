#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[max]<arr[i]){
            max=arr[i];
            printf("%d ",arr[i]);
        }else{
            printf("-1 ");
        }
    }
    return 0;
}