//WAP that asks time in seconds and convert it into hour, minutes and seconds.
#include<stdio.h>
int main(){
    int sec;
    int hour;
    int minute;
    int remainingSeconds;

    printf("Enter the sec: ");
    scanf("%d",&sec);

    hour = sec / 3600;
    remainingSeconds = sec % 3600;

    minute = remainingSeconds / 60;
    remainingSeconds = remainingSeconds % 60;

    printf("Hour: %d\n",hour);
    printf("Minute: %d\n",minute);
    printf("Remaining Second: %d\n",remainingSeconds);






    return 0;
}