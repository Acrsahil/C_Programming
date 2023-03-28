#include<stdio.h>

int main(){

int select;
char str[1000];
int num;
    int i = 0;
    int cont = 0;
top:
    printf("1. For string  -> \n2. For integer -> \n99. To exit -> ");
    scanf("%d",&select);

    if(select == 1){
        printf("Enter the string: ");
        scanf("%c",&str);
     printf("%d\n",sizeof(str)-1);

    }else if(select == 2) {
    printf("Enter the value of num: ");
    scanf("%d",&num);
    while(num>0){
        num = num/10;
        i++;
        

    }
    printf("%d\n",i);
    

    }else if(select == 99){
        goto exit;
    }else{
        printf("\n\nPlease choose correct option!\n");
        goto top;
    }
    




    exit: 
    return 0;
}