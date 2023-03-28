#include<stdio.h>

int main(){
    //char ptr[] = "Sahil boy in the house";
    //ptr[] = "Sugam bhai"; // we cannot rewrite value which we have made alredy in array
char *ptr = "Sahil boy in the house";
ptr = "Sugam Bhai";
printf("%s",ptr);
    return 0;
}