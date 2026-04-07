//  Q4- Find the Duplicate Number
// Example: Input:[1,3,4,2,2]
// Output:2
#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int slow = arr[0], fast = arr[0];

    // Phase 1: Finding cycle
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    // Phase 2: Finding duplicate
    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    printf("Duplicate: %d\n", slow);
    return 0;
}