// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    char name[15];
    float salary;
    int ph_no;
};

int main() {
    struct employee e1;
    printf("Enter the name of the employee: ");
    scanf("%s",&e1.name);
    printf("Enter the code of the employee: ");
    scanf("%d",&e1.code);
    printf("Enter the salary of the employee: ");
    scanf("%f",&e1.salary);
    printf("Enter the phone number of the employee: ");
    scanf("%s",&e1.ph_no);
    
    
    printf("The name of employee is: %s\n",e1.name);
    printf("Salary of %s is %.2f\n",e1.name,e1.salary);
    printf("The phone number of %s is %d\n",e1.name,e1.ph_no);
    
    
    return 0;
}
