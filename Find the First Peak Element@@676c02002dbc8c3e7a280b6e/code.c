#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            return i;  // Return index of first peak
        }
    }
    return -1;  // No peak found (should not happen)
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
for(int i=0;i<n;i++){
    if(findFirstPeak(arr,n)){
        printf("%d\n",arr[i]);
    }else{
        printf("-1");
    }
}
    

    return 0;
}


