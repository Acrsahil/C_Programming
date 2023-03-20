#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("The character is vowels\n");
        
        }else {
            printf("The character is consonent \n");

        }

    return 0;

}