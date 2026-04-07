// Q6. Find the Missing and Repeating Number
// Example: Input:n=5,arr[]={1,3,3,5,4}
// Output: Missing=2,
// Repeating=3
#include <stdio.h>

int main() {
    int arr[] = {1, 3, 3, 5, 4};
    int n = 5;
    long long S = 0, Sq = 0;
    for (int i = 0; i < n; i++) {
        S += arr[i];
        Sq += (long long)arr[i] * arr[i];
    }
    long long Sn = (long long)n * (n + 1) / 2;
    long long Sqn = (long long)n * (n + 1) * (2 * n + 1) / 6;

    long long diff = S - Sn; // Y - X
    long long sumSq = (Sq - Sqn) / diff; // Y + X

    int rep = (int)((diff + sumSq) / 2);
    int mis = (int)(sumSq - rep);
    printf("Missing: %d, Repeating: %d\n", mis, rep);
    return 0;
}