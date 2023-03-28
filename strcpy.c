#include <stdio.h>

void cp_custom(char *tg,char *st){
    int i = 0;
   while(st[i]!='\0'){
       tg[i] = st[i];
       
   }
   tg[i] = '\0';
}
int main(){
char st[] = "sahil";
char tg[strlen(st)+1];
cp_custom(tg,st);
printf("The original string is %s and copied is : %s\n",st,tg);
    
   return 0;
}
