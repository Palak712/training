// Q8. Longest Consecutive Sequence
// Example: Input:[100,4,200,1,3,2]
// Output:4
#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = 6;
    qsort(arr, n, sizeof(int), comp);

    int max_s = 1, curr_s = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            if (arr[i] == arr[i-1] + 1) curr_s++;
            else { if (curr_s > max_s) max_s = curr_s; curr_s = 1; }
        }
    }
    printf("Longest: %d\n", (curr_s > max_s ? curr_s : max_s));
    return 0;
}