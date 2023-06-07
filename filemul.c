#include<stdio.h>

int main(){
    int i = 0;
    int num;
    FILE *file;
    printf("Enter the table you want to make a multiplication table\n");
    scanf("%d",&num);
    file = fopen("table.txt","w");
    for(i;i<10;i++){
        fprintf(file,"%d * %d = %d\n",num,i+1,num*(i+1));

    }
    fclose(file);
    printf("Sucessfully generated the table of %d\n",num);

    return 0;
}