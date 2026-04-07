// Q11. Longest Palindromic Substring
// Example: Input:"babad"
// Output:"bab"or"aba"
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "babad";
    int n = strlen(s), start = 0, maxL = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 1; j++) {
            int l = i, r = i + j;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > maxL) { start = l; maxL = r - l + 1; }
                l--; r++;
            }
        }
    }
    for (int i = start; i < start + maxL; i++) printf("%c", s[i]);
    return 0;
}