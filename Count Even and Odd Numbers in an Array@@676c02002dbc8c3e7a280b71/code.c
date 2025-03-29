#include <stdio.h>

int main() {
    int n, even_count = 0, odd_count = 0;
    scanf("%d", &n); // Read the number of elements

    int arr[n]; // Declare the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
        if (arr[i] % 2 == 0) {
            even_count++; // Count even numbers
        } else {
            odd_count++; // Count odd numbers
        }
    }

    printf("%d %d\n", even_count, odd_count); // Print even and odd counts

    return 0;
}
