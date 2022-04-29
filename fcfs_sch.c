#include<stdio.h>
int main(){
	int n;
	int bt[10],at[10],tat[20],wt[10],i;
	int burst=0, cmplt,total;
	float avg_wt,avg_tat;
	printf("enter the number of process:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter the arival time for a process");
		scanf("%d",at+i);
		printf("enter the burst time for a process");
		scanf("%d",bt+i);
		if(i==0)
		wt[i]=at[i];
		else
		wt[i]=bt[i];
		burst+=bt[i];
		cmplt+=bt[i];
		tat[i]=cmplt-at[i];
		total+=wt[i];
		total+=tat[i];
	}	
	avg_wt=(float)total/(float)n;
	cmplt=0;
	total=0;
	avg_tat=(float)total/(float)n;
	printf("process_nunmber\t,arival_time\t,waiting_time\t,burst_time\t,turnaroud_time\n");
	for(i=0;i<n;i++){
		printf("%d\t%d\t%d\t%d\t%d\n",i,at[i],wt[i],bt[i],tat[i]);
	}
	printf("average waiting time: %f\n",avg_wt);
	printf("averahe turnaround time: %f",avg_tat);
	return 0;
}
