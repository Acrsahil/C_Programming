// Online C compiler to run C program online
#include <stdio.h>


typedef struct number{
    char name[20];
    char bank[20];
    int phone_num;
    char address[20];
    char mail[30];
}info;

void display(info c){
    printf("**Customer Detail**\n");
    printf("Name: %s\n",c.name);
    printf("Bank Name: %s\n",c.bank);
    printf("Phone No: %d\n",c.phone_num);
    printf("Address: %s\n",c.address);
    printf("Mail: %s\n",c.mail);
}
int main() {
    info customer[2];
    for(int i = 0;i<2;i++){
        printf("Name: ");
        fgets(customer[i].name,20,stdin);
         printf("Bank Name: ");
        fgets(customer[i].bank,20,stdin);
        printf("Phone No: ");
        scanf("%d",&customer[i].phone_num);
        getchar();
        printf("Address: \n");
        fgets(customer[i].address,20,stdin);
        printf("Mail: ");
        fgets(customer[i].mail,30,stdin);
       
    }
    for(int i = 0;i<2;i++){
         display(customer[i]);
    }
  

    return 0;
}
