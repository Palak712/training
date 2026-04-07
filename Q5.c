// Q5. Maximum Product Subarray
// Example: Input:[2,3,-2,4]
// Output:6
#include <stdio.h>

int main() {
    int arr[] = {2, 3, -2, 4};
    int n = 4;
    int res = arr[0], max_v = arr[0], min_v = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) { // Swap on negative
            int t = max_v; max_v = min_v; min_v = t;
        }
        max_v = (arr[i] > max_v * arr[i]) ? arr[i] : max_v * arr[i];
        min_v = (arr[i] < min_v * arr[i]) ? arr[i] : min_v * arr[i];
        if (max_v > res) res = max_v;
    }
    printf("Max Product: %d\n", res);
    return 0;
}