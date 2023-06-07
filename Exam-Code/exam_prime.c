#include<stdio.h>

int main(){
    int n;
    int prime;
    printf("How many number prime number you want to display\n");
    scanf("%d",&n);
    for(int i = 2;i<=n;i++){
        prime = 1;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                prime = 0;
                break;
            }
            
        }
    if(prime==1){
        printf("%d ",i);
    }
    }
    return 0;
}