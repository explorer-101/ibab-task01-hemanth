#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // The array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);     // Calculate the size of the array
    int i, j, temp;

    // Outer loop for passes
    for (i = 0; i < n - 1; i++) {
        // Inner loop for comparisons and swaps
        for (j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
