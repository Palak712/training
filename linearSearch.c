#include <stdio.h>

int linear_search(int n, int arr[], int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Key not found
}

int main() {
    int n, i;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter a key element:\n");
    scanf("%d", &key);

    int keyIndex = linear_search(n, arr, key);

    if (keyIndex == -1) {
        printf("%d not found.\n", key);
    } else {
        printf("%d is found at index %d.\n", key, keyIndex);
    }

    return 0;
}
