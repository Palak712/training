// Q10. Next Permutation
// Example: Input:[1,2,3]
// Output:[1,3,2]
#include <stdio.h>

void swap(int* a, int* b) { int t = *a; *a = *b; *b = t; }

int main() {
    int arr[] = {1, 2, 3}, n = 3;
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i+1]) i--;
    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) j--;
        swap(&arr[i], &arr[j]);
    }
    // Simple reverse logic
    int s = i + 1, e = n - 1;
    while (s < e) swap(&arr[s++], &arr[e--]);

    for (int k = 0; k < n; k++) printf("%d ", arr[k]);
    return 0;
}