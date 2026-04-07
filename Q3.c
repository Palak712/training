// Q3-Merge Intervals
// Example: Input:[[1,3],[2,6],[8,10],[15,18]]
// Output:[[1,6],[8,10],[15,18]]
#include <stdio.h>
#include <stdlib.h>

struct Interval { int start, end; };

// Compare function for qsort
int compare(const void* a, const void* b) {
    return (((struct Interval*)a)->start - ((struct Interval*)b)->start);
}

int main() {
    struct Interval arr[] = {{1,3}, {2,6}, {8,10}, {15,18}};
    int n = 4;

    qsort(arr, n, sizeof(struct Interval), compare);

    int index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[index].end >= arr[i].start) {
            if (arr[index].end < arr[i].end) arr[index].end = arr[i].end;
        } else {
            index++;
            arr[index] = arr[i];
        }
    }

    for (int i = 0; i <= index; i++) printf("[%d, %d] ", arr[i].start, arr[i].end);
    return 0;
}