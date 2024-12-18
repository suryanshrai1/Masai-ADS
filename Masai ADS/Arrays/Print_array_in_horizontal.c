#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Reading the size of the array

    int arr[n];  // Declare an array of size n

    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing each element on a new line
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}