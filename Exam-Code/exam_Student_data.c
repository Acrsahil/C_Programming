/*write c program using structure that reads the records
of 50 students with member’s roll, name and makes and display the records of
students who have obtained greater than 230 marks */


#include<stdio.h>

typedef struct Student{
    char name[50];
    int roll;
    int marks;

}std;

int main(){
    std s[50];
    int n;
    printf("How many Student You want to enter: ");
    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        printf("Enter the Student %d Name: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the Student %d Roll No: ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the Student %d Marks: ",i+1);
        scanf("%d",&s[i].marks);
    }
    printf("Name\tRoll NO\tMarks\n");
    for(int i = 0;i<n;i++){
        if(s[i].marks>230){
            
            printf("%s\t  %d\t %d\n",s[i].name,s[i].roll,s[i].marks);
        }
    }    
    return 0;
}