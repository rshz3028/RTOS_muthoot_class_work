#include<stdio.h>

struct Process{
	int pid;
	int arrival_time;
	int burst_time;
};

int main(void){

	int n;
	printf("Enter the number of processes: \n");
	scanf("%d",&n);
	struct Process processes[n];
	for(int i=0;i<n;i++){
		processes[i].pid = i+1;
		printf("Enter the process arrival time and the process burst time for the process %d\n",i);
		scanf("%d %d",&processes[i].arrival_time,&processes[i].burst_time);
	}
	printf("%-5s %-13s %-11s\n","pid","arrival time","burst time");
	for(int i=0;i<n;i++){
		printf("%-5d %-13d %-11d\n",processes[i].pid,processes[i].arrival_time,processes[i].burst_time);
	}
	return 0;
}
