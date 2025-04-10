#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Define an array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    // Traverse the array and print each element
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
