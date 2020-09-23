<<<<<<< HEAD
#include <stdio.h>
=======
#include<stdio.h>
>>>>>>> 7467891529d739c278635708c7613e06cb113ae5

int main() {

    int cnt, n, time, r, flag = 0, qntm;
    scanf("%d", &n);
    int wt = 0, tat = 0, a[n], b[n], tmp[n];
    r = n;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
        tmp[i] = b[i];
    }
    scanf("%d", &qntm);
    for (time = 0, cnt = 0; r != 0;) {
        if (tmp[cnt] <= qntm && tmp[cnt] > 0) {
            time += tmp[cnt];
            tmp[cnt] = 0;
            flag = 1;
        } else if (tmp[cnt] > 0) {
            tmp[cnt] -= qntm;
            time += qntm;
        }
        if (tmp[cnt] == 0 && flag == 1) {
            r--;
            printf("Process %d:\n", cnt+1);
            printf("\tWaiting time: %d\n", time - a[cnt] - b[cnt]);
            printf("\tTurn around time: %d\n", time - a[cnt]);
            wt += time - a[cnt] - b[cnt];
            tat += time - a[cnt];
            flag = 0;
        }
        if (cnt == n - 1) cnt = 0;
        else if (a[cnt + 1] <= time) cnt++;
        else cnt = 0;
    }
<<<<<<< HEAD
    printf("Average Waiting Time: %f\n", (double)(wt) / n);
    printf("Average Turnaround Time: %f\n", (double)(tat) / n);
=======
    printf("\nAverage Waiting Time= %f\n", (double)(wt) / n);
    printf("Avg Turnaround Time = %f", (double)(tat) / n);
>>>>>>> 7467891529d739c278635708c7613e06cb113ae5
}
