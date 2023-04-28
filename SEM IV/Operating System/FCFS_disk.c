#include <stdio.h>

int main()
{
    int pid[15];
    int bt[15];
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter process id of all the processes: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pid[i]);
    }

    printf("Enter burst time of all the processes: ");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &bt[i]);
    }

    int i, wt[n];
    wt[0] = 0;

    for (i = 1; i < n; i++)
    {

        wt[i] = bt[i - 1] + wt[i - 1];
    }

    printf("Process ID     Burst Time     Waiting Time     TurnAround Time\n");

    float twt = 0.0;
    float tat = 0.0;

    for (i = 0; i < n; i++)
    {
        printf("%d\t\t", pid[i]);
        printf("%d\t\t", bt[i]);
        printf("%d\t\t", wt[i]);
        printf("%d\t\t", bt[i] + wt[i]);
        printf("\n");
        twt += wt[i];
        tat += (wt[i] + bt[i]);
    }

    float att, awt;
    awt = twt / n;
    att = tat / n;
    printf("Avg. waiting time= %f\n", awt);
    printf("Avg. turnaround time= %f", att);
}

/*
Output:
Enter the number of processes: 3
Enter process id of all the processes: 1 2 3
Enter burst time of all the processes: 5 11 11
Process ID     Burst Time     Waiting Time     TurnAround Time
1               5               0               5
2               11              5               16
3               11              16              27
Avg. waiting time= 7.000000
Avg. turnaround time= 16.000000

*/