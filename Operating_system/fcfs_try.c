#include <stdio.h>

// Function to calculate arrival time, completion time, turnaround time, waiting time, response time, and burst time
void calculateMetrics(int n, int arrival[], int burst[], int completion[], int turnaround[], int waiting[], int response[]) {
    int currentTime = 0; // Current time initialized to 0

    // Traverse through each process
    for (int i = 0; i < n; i++) {
        // Calculate completion time for the current process
        currentTime += burst[i];
        completion[i] = currentTime;

        // Calculate turnaround time for the current process
        turnaround[i] = completion[i] - arrival[i];

        // Calculate waiting time for the current process
        waiting[i] = turnaround[i] - burst[i];

        // Calculate response time for the current process
        response[i] = waiting[i] + arrival[i];
    }
}

int main() {
    int n; // Number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int arrival[n], burst[n], completion[n], turnaround[n], waiting[n], response[n];

    // Input arrival time and burst time for each process
    printf("Enter arrival time and burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d%d", &arrival[i], &burst[i]);
    }

    // Calculate metrics
    calculateMetrics(n, arrival, burst, completion, turnaround, waiting, response);

    // Display metrics for each process
    printf("Metrics for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        printf("Arrival time: %d\n", arrival[i]);
        printf("Burst time: %d\n", burst[i]);
        printf("Completion time: %d\n", completion[i]);
        printf("Turnaround time: %d\n", turnaround[i]);
        printf("Waiting time: %d\n", waiting[i]);
        printf("Response time: %d\n", response[i]);
        printf("\n");
    }

    return 0;
}
