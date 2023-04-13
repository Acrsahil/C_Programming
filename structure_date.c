#include<stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
}date;
void display(date d){
    printf("Date is %d/%d/%d\n",d.day,d.month,d.year);
}
int datacomp(int d1 , int d2){
    
}
int main(){
    date d;
    // printf("Enter Day: ");
    // scanf("%d",&d.day);
    // printf("Enter Month: ");
    // scanf("%d",&d.month);
    // printf("Enter Year: ");
    // scanf("%d",&d.year);
     date d1 = {22,12,5};
     date d2 = {14,110,9};
    display(d1);
    display(d2);
    
}
