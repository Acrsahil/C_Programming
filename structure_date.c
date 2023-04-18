#include<stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
}date;
void display(date d){
    printf("Date is %d/%d/%d\n",d.day,d.month,d.year);
}
int datacomp(date d1 , date d2){
    // Make desicion on the basis of year
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    // Make desicion on the basis of month
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    // Make desicion on the basis of day
    if(d1.day>d2.day){
        return 1;
    }
    if(d1.day<d2.day){
        return -1;
    }
    return 0;
    
}
int main(){
    date d;
    // printf("Enter Day: ");
    // scanf("%d",&d.day);
    // printf("Enter Month: ");
    // scanf("%d",&d.month);
    // printf("Enter Year: ");
    // scanf("%d",&d.year);
     date d1 = {14,110,9};
     date d2 = {14,110,7};
    display(d1);
    display(d2);
    int a = datacomp(d1,d2);
    printf("Data Comparision returns : %d\n",a);
    
}
