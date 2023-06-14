//input enter the no of processes
//make array of
//
//for loop enter arrival time and brust time for each processes

#include<stdio.h>
void print(int AT[],int BT[],int n){
        printf("Process NO\tArrival Time\tBrust Time\n");
    for(int i = 0; i<n; i++){
        printf("P%d\t\t%d\t\t%d\n",i+1,AT[i],BT[i]);
    }
}

   int main(){
    int n;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    int AT[n];
    int BT[n];
    int CT[n];
    int TAT[n];
    int WT[n];
    int RT[n];
    for(int i = 0;i<n;i++){
        printf("Enter the Arrival time of P%d: ",i+1);
        scanf("%d",&AT[i]);
        printf("Enter the Brust Time of p%d: ",i+1);
        scanf("%d",&BT[i]);
    }
    print(AT,BT,n);


    return 0;

}