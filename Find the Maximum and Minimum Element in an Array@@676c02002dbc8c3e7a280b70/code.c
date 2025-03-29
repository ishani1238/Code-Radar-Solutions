#include <stdio.h>

int findmax(int arr[], int n) {
    int max = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max]) {
            max = i;
        }
    }
    return max;  // Return the index of the maximum element
}

int findmin(int arr[], int n) {
    int min = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min]) {
            min = i;
        }
    }
    return min;  // Return the index of the minimum element
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Corrected input statement
    }

    int maxIndex = findmax(arr, n);
    int minIndex = findmin(arr, n);

    printf("%d ", arr[maxIndex]);
    printf("%d ", arr[minIndex]);

    return 0;
}
