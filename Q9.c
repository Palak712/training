// Q9. Trapping Rain Water
// Example: Input:[0,1,0,2,1,0,1,3,2,1,2,1]
// Output:6
#include <stdio.h>

int main() {
    int h[] = {0,1,0,2,1,0,1,3,2,1,2,1}, n = 12;
    int l = 0, r = n - 1, lM = 0, rM = 0, res = 0;

    while (l < r) {
        if (h[l] < h[r]) {
            if (h[l] >= lM) lM = h[l]; else res += lM - h[l];
            l++;
        } else {
            if (h[r] >= rM) rM = h[r]; else res += rM - h[r];
            r--;
        }
    }
    printf("Water: %d\n", res);
    return 0;
}