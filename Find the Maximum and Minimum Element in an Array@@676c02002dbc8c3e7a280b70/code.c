#include<stdio.h>
void findmax(int arr[],int n){
    for(int i=0;i<n;i++){
        int max=i;
        for(int j=i+1;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[max];
                arr[max]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }

}
void findmin(int arr[];int n){
    for(int i=0;j<n-1;i++){
        int min=i;
        for(int j=i+1;j<n-1-i;j++){
            if(arr[min]>arr[j+1]){
                int temp =arr[min];
                arr[min]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
  
}
int main(){
    int n;
    scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[n]);
}
int maxelement=findmax(arr,n);
int minelement = findmin(arr,n);
printf("%d ",arr[maxelement]);
printf("%d",arr[minelement]);
return 0;
}