#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100.456;
    strcpy(facebook[0].name,"sahil");
    
    facebook[1].code = 101;
    facebook[1].salary = 10234230.456;
    strcpy(facebook[1].name,"madan");
    
    
    facebook[2].code = 102;
    facebook[2].salary = 3423.423;
    strcpy(facebook[2].name,"krishna");
    
    facebook[3].code = 103;
    facebook[3].salary = 12342.4345;
    strcpy(facebook[3].name,"hari");
    
    printf("The 3 no of employee salary is %.2f\n",facebook[0].salary);

    
    
    return 0;
}
