#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n); // Array ka size lo
    int arr[n];

    // Array input lo
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k); // Kitne baar rotate karna hai

    k = k % n; // Agar K bada hai toh adjust karo

    // **Step 1: Pehle last ke K elements print karo**
    for (int i = n - k; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    // **Step 2: Phir baaki elements print karo**
    for (int i = 0; i < n - k; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
