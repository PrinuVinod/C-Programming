#include<stdio.h>
int main()
{
	int p[10], at[10], bt[10], tt[10], ct[10], wt[10], i, n, cmpl_t, burst = 0;
	float awt, att, total = 0;
	printf("Enter the Number Of Process: ");
	scanf("%d",&n);
	printf("Enter Process ID: \n");
	for(i=0; i<n; i++)
	scanf("%d",&p[i]);
	printf("Enter Arrival Time: \n");
	for(i=0; i<n; i++)
	scanf("%d",&at[i]);
	printf("Enter Burst Time: \n");
	for(i=0; i<n; i++)
	scanf("%d",&bt[i]);
	for(int i=0;i<n;i++)
	{
		if(i==0)
		wt[i]=at[i];
		else
		wt[i]=burst-at[i];
		burst+=bt[i];
		total+=wt[i];
	}
	awt=total/n;
	cmpl_t=0;
	total=0;
	for(int i=0;i<n;i++)
	{
		cmpl_t+=bt[i];
		tt[i]=cmpl_t-at[i];
		ct[i]=cmpl_t;
		total+=tt[i];
	}
	att=total/n;
	printf("Process\t Arrival Time\t Burst Time\t Waiting Time\t Turnaround Time\n");
	for(i=0; i<n; i++)
	printf("%d\t\t" "%d\t\t" "%d\t\t" "%d\t\t" "%d\t\t" "%d\t\t\n", p[i], at[i], bt[i], wt[i], tt[i], ct[i]);
	printf("Average waiting time is : %f\n",awt);
	printf("Average turn around time is : %f\n",att);
	return 0;
}