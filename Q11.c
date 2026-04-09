#include <stdio.h>
#include <string.h>

// Function to expand around center and return length
int expand(char* s, int left, int right, int n) {
    while (left >= 0 && right < n && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1; // Palindrome ki length
}

void longestPalindrome(char* s) {
    int n = strlen(s);
    if (n < 1) return;

    int start = 0, maxLen = 1;

    for (int i = 0; i < n; i++) {
        // Case 1: Odd length palindrome (Center ek character hai)
        int len1 = expand(s, i, i, n);
        
        // Case 2: Even length palindrome (Center do characters ke beech hai)
        int len2 = expand(s, i, i + 1, n);

        // Dono mein se jo bada ho
        int len = (len1 > len2) ? len1 : len2;

        if (len > maxLen) {
            maxLen = len;
            start = i - (len - 1) / 2;
        }
    }

    // Result print karna
    printf("Longest Palindromic Substring is: ");
    for (int i = start; i < start + maxLen; i++) {
        printf("%c", s[i]);
    }
    printf("\nLength: %d\n", maxLen);
}

int main() {
    char str[] = "babad";
    longestPalindrome(str);
    return 0;
}