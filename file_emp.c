#include <stdio.h>

typedef struct employee {
    char name[20];
    int salary;
} emp;

int main() {
    emp e;
    FILE *file;
    file = fopen("emp.txt","w");
    fprintf(file, "Name\t\tSalary\n");
    for(int i = 1; i <= 2; i++) {
        printf("Enter the name of the employee: ");
        scanf("%s",e.name);
        printf("Enter the salary of the employee: ");
        scanf("%d", &e.salary);
        getchar();
        fprintf(file,"%s\t\t%d\n",e.name,e.salary);
    }
    fclose(file);
    return 0;
}
