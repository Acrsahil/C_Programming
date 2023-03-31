#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee sahil = {100,34.23,"Harry"};
    printf("Name  : %s\n Code: %d\n Salary: %f\n",sahil.name,sahil.code,sahil.salary);
    return 0;
}
