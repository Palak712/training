// Q7. Subarray with Given Sum(Hint- If indexing is position based)
// Example: Input:arr=[1,2,3,7,5],sum=12
// Output:[2,4]
#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 7, 5};
    int n = 5, target = 12, sum = 0, start = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        while (sum > target && start < i) sum -= arr[start++];
        if (sum == target) {
            printf("Position: %d to %d\n", start + 1, i + 1);
            return 0;
        }
    }
    return 0;
}