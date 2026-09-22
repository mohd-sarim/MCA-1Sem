#include <stdio.h>

int main() {
	int n, i, burst, total = 0;
	float average;
	
	printf("Enter number of processes: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		printf("Enter burst time for P%d: ", i);
		scanf("%d", &burst);
		
		total = total + burst;
	}
	
	average = (float)total / n;
	
	printf("\nTotal Burst Time = %d", total);
	printf("\nAverage Burst Time = %.2f", average);
	
	return 0;
}
