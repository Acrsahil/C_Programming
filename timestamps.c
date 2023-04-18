#include<stdio.h>

typedef struct timestamps
{
   int day;
   int month;
   int year;
   int hour;
   int minute;
   int second;
}time;

void printtime(time t){
    printf("timestamp: %d/%d/%d %d:%d:%d\n",t.day,t.month,t.year,t.hour,t.minute,t.second);
}

int timecomp(time t1, time t2){
     // Make desicion on the basis of year
    if(t1.year>t2.year){
        return 1;
    }
    if(t1.year<t2.year){
        return -1;
    }
    // Make desicion on the basis of month
    if(t1.month>t2.month){
        return 1;
    }
    if(t1.month<t2.month){
        return -1;
    }
    // Make desicion on the basis of day
    if(t1.day>t2.day){
        return 1;
    }
    if(t1.day<t2.day){
        return -1;
    }
       // Make desicion on the basis of hour
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour){
        return -1;
    }
    // Make desicion on the basis of minute
    if(t1.minute>t2.minute){
        return 1;
    }
    if(t1.minute<t2.minute){
        return -1;
    }
    // Make desicion on the basis of second
    if(t1.second>t2.second){
        return 1;
    }
    if(t1.second<t2.second){
        return -1;
    }
    return 0;
}


int main(){
    time t1 = {12,10,2019,2,59,45};
    time t2 = {12,10,2019,2,60,45};
    printtime(t1);
    printtime(t2);
    int t = timecomp(t1,t2);
    printf("The comparision of the Timestamps return %d\n",t);

    return 0;
}