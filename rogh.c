#include<stdio.h>
#include<string.h>

int main(){
    char *s;
    int i = 0;
    int len;
    s = "sahil";
    len = strlen(s);
    if (s[i] != s[len-i-1])
    {
        printf("Not pallindrome\n");
    }
    else {
        printf("pallindrome\n");
    }
    return 0;
}