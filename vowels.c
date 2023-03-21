#include<stdio.h>

int main(){
    char check;
    char c[200];
    int count = 0;
    printf("Enter letter: ");
    scanf("%s",&c);
    for(int i=0;c[i];i++ ){
        if (c[i] == 'a' || c[i] =='e' || c[i] == 'i' ||c[i] == 'o' ||c[i] == 'u'){
            count++;
        }
    }
    printf("The vowels in your word is %d\n",count);
    return 0;
}