/*WAP that takes name, marks from 10 students and perform the following:
a. If any one of the marks is less than 40 print fail DONE
b. If any marks are more than hundred print “marks are greater than 100” DONE
c. Calculate percentage and display percentage
d. Display the name of student on the basis of marks in ascending order */


#include<stdio.h>

typedef struct Student{
    char name[20];
    int marks;
}std; 

int main(){
    std s[10];
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("Enter name of the %d student: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter marks of the %d student: ",i+1);
        scanf("%d",&s[i].marks);
    }
    printf("\n");

    for(int i = 0;i<n;i++){
        if(s[i].marks < 40){
            printf("%s has failed\n",s[i].name);
        }
    }
    printf("\n");

    for(int i = 0;i<n;i++){
        if(s[i].marks > 100){
            printf("%s has scored more than 100 marks\n",s[i].name);
        }
    }
    printf("\n");

    for(int i = 0;i<n;i++){
        float percent = (float) s[i].marks/100*100;
        printf("The percentage of %s is %.2f\n",s[i].name,percent);
    }
    printf("\n");

    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(s[i].marks > s[j].marks){
                std temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Students sorted based on marks in ascending order:\n");
    printf("Name\tMarks\n");
    for(int i = 0;i<n;i++){
        printf("%s\t%d\n",s[i].name,s[i].marks);
    }

    return 0;
}



