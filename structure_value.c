#include<stdio.h>
#include<string.h>

struct Student{
    char name[100];
    char Address[100];
    int symbol;
    float marks;
};
int main(){
    struct Student s1,s2,s3;
    strcpy(s1.name,"Hari Thapa");
    strcpy(s1.Address,"Makal_Bari");
    s1.symbol = 23;
    s1.marks = 223;
    
    printf("Name: %s\n",s1.name);
    printf("Address: %s\n",s1.Address);
    printf("symobl: %d\n",s1.symbol);
    printf("Marks: %f\n",s1.marks);
}
