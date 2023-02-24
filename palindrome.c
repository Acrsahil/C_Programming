#include<stdio.h>
#include<string.h>


int is_palindrome(char *s){
    int i;
    int len =strlen(s);
    for (i=0; i<len/2; i++) {
        if (s[i] != s[len-i-1]) { // ardra
            return 0; // not a palindrome
        }
    }
    return 1; // palindrome
}

int main(){
    char s[20];
    printf("Enter a string\n");
    scanf("%s",&s);
    if (is_palindrome(s)){
        printf("%s is a palindrome\n",s);
    }else{
        printf("%s is not a palindrome\n",s);
    }

    return 0;
}