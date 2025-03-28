#include<stdio.h>
int kthSmallest(int arr[],int n,int k)
if(k<=0||k>n){
    return -1;
}{
    for(int i=0;i<k;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    return arr[k-1];
}
