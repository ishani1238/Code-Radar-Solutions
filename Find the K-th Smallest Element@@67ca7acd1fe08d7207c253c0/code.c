#include<stdio.h>
void kthSmallest(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        int k=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[k]){
                k=arr[j];
            }

        }
    }
}
