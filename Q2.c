//  Q2.Rotate an Array by K Steps
// Example: Input:nums=[1,2,3,4,5,6,7],k=3
// Output:[5,6,7,1,2,3,4]
#include <stdio.h>

// Function to reverse array elements between start and end
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, k = 3;
    k = k % n; // Handling k > n

    reverse(arr, 0, n - 1); // Reverse whole array
    reverse(arr, 0, k - 1); // Reverse first k
    reverse(arr, k, n - 1); // Reverse remaining

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}