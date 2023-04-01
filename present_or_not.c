#include<stdio.h>
int present(char st[],char c){
    char *ptr = st;
    int occurance = 0;
    while(*ptr!='\0'){
        if(*ptr==c){
            occurance++;
        }
        ptr++;
    }
    return occurance;
}
int main(){
    char st[] = "dfil";
    int a = present(st,'s');
    if(a>0){
        printf("The character  is present in string\n");
    }else{
        printf("The character is not present in string in the string\n");
    }
    
    return 0;
}