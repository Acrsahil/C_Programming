#include <stdio.h>
#include <string.h>

int is_palindrome(int n) {
    // Convert the integer to a string for easy manipulation.
    char s[20];
    sprintf(s, "%d", n);
    // Use two pointers to check if the string is a palindrome.
    int left = 0;
    int right = strlen(s) - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            return 0;  // False
        }
        left++;
        right--;
    }
    
    return 1;  // True
}

int main() {
    int n = 12345;
    if (is_palindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
    return 0;
}

