#include <stdio.h>
typedef struct process{
    int id;
    int burst_t;
    int priority;
}process;
void sort(process P[], int n, process temp[]){
    int i, j, swap1, swap2, swap3;
    for(i=0; i<n; i++) {
        temp[i].priority = P[i].priority;
        temp[i].id = P[i].id;
        temp[i].burst_t = P[i].burst_t;
    }
    for(i=0;i<n-1;i++) {
        for(j=0; j < n - i - 1; j++){
            if (temp[j].priority > temp[j+1].priority){
                swap1 = temp[j].id;
                swap3 = temp[j].priority;
                swap2 = temp[j].burst_t;
                temp[j].burst_t = temp[j+1].burst_t;
                temp[j].id = temp[j+1].id;
                temp[j].priority = temp[j+1].priority;
                temp[j+1].id = swap1;
                temp[j+1].burst_t = swap2;
                temp[j+1].priority = swap3;
            }
        }
    }
}
void read(process P[], int n) {
    int i = 0;
    printf("Enter the process details =>\n");
    while(i<n) {
        printf("(%d) Process ID, Burst Time, Priority: ", i+1);
        scanf("%d %d %d", &P[i].id, &P[i].burst_t, &P[i].priority);
        i++;
    }
}
void display(process P[], int n, int turnaround_t[],int wait_t[], process temp[], float avg_ta, float avg_wait) {
    int i;
    printf("\nProcess ID \t Burst Time\t Priority\t Waiting Time\t Turnaround Time\n");
    for(i=0; i<n; i++) {
        printf("%d\t\t  %d\t\t  %d\t\t  %d\t\t\t  %d \n", temp[i].id, temp[i].burst_t, temp[i].priority, wait_t[i], turnaround_t[i]);
    }
    printf("Average Turnaround time = %.2f\n", avg_ta);
    printf("Average Waiting time = %.2f\n", avg_wait);
}
void calculate(process P[], int n, process temp[]) {
    int wait_t[n], turnaround_t[n], num2, sum1, sum2;
    turnaround_t[0] = temp[0].burst_t;
    for(int i=1; i < n; i++) {
        turnaround_t[i] = 0;
        turnaround_t[i] = turnaround_t[i-1] + temp[i].burst_t;
    }
    for(int i=0; i < n; i++) {
        wait_t[i] = turnaround_t[i] - temp[i].burst_t;
    }
    num2 = 0, sum1 = 0;
    float avg_ta, avg_wait;
    for(int i=0; i < n; i++) {
        sum1 += turnaround_t[i];
    }
    avg_ta = sum1 / n;
    for(int i=0; i < n; i++) {
        sum2 += wait_t[i];
    }
    avg_wait = sum2 / n;
    display(P, n, turnaround_t, wait_t, temp, avg_ta, avg_wait);
}
void main() {
    process P[20];
    process temp[20];
    int n, opt, i = 0;
    printf("Enter the number of process: ");
    scanf("%d", &n);
    read(P, n);
    sort(P, n, temp);
    calculate(P, n, temp);
}