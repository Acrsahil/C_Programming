#include <stdio.h>

#define MAX_PROCESSES 10

struct Process {
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
};

void calculateTimes(struct Process processes[], int n);

int main() {
    int n, i;
    struct Process processes[MAX_PROCESSES];

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d\n", i + 1);
        printf("Arrival Time: ");
        scanf("%d", &processes[i].arrivalTime);
        printf("Burst Time: ");
        scanf("%d", &processes[i].burstTime);
    }

    calculateTimes(processes, n);

    printf("\nProcess\t  Arrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, processes[i].arrivalTime,
               processes[i].burstTime, processes[i].waitingTime, processes[i].turnaroundTime);
    }

    return 0;
}

void calculateTimes(struct Process processes[], int n) {
    int i, totalWaitingTime = 0;

    for (i = 0; i < n; i++) {
        processes[i].waitingTime = totalWaitingTime;
        processes[i].turnaroundTime = processes[i].waitingTime + processes[i].burstTime;
        totalWaitingTime += processes[i].burstTime;
    }
}
