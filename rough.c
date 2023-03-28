#include<stdio.h>
#include<string.h>

int main(){
    char *st= "Sahil is a bad boy";
    char st2[] = "sahil is a good boy";
    printf("Before: %s\n",st);
    printf("Before: %s\n",st2);
    printf("%s",st);
    

    strcpy(st2,st);

    printf("After: %s\n",st);
    printf("After: %s\n",st2);
    return 0;
}