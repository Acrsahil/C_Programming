<<<<<<< HEAD
#include <stdio.h>
void slice(char *st,int m,int n){
    int i=0;
    while((m+i)<n){
        st[i] = st[m+i];
        i++;
    }
    st[i] = '\0';
    
}
int main() {
    char st[] = "acrsahil";
    slice(st,1,7);
    printf("%s",st);
    
   return 0;
}
=======
#include<stdio.h>

void slice(char *st, int m, int n){
    int i = 0; 
    while (){
        
    }
}
int main(){
    char st[] = "Sahil";
    slice(st,1,4);
    return 0;
}
>>>>>>> d6023de (added all file to github)
