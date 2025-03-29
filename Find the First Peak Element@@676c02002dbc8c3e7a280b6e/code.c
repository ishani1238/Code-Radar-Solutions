#include<stdio.h>
int peak(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int max=i;
        for(int j =n+1;j,n-1-i;j++){
            if(arr[j]>arr[j-1]||arr[i]>arr[j+1]){
                return 1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",arr[i]);
    if(peak(arr,n)){
        printf("%d",arr[j]);
    } return 0;
    }

}