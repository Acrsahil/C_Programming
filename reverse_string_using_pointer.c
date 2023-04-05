#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    char *start, *end, temp;
    start = str;
    end = str + strlen(str) - 1;
    printf("%d\n",*end);
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline character
    reverse(str);
    printf("Reversed string is: %s\n", str);
    return 0;
}
