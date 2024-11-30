#include<stdio.h>

void main()
{
	int seconds;
	printf("Enter time in seconds:\n");
	scanf("%d", &seconds);
	float minutes = seconds/60;
	printf("Time in minutes wil be:\t%f\n", minutes);
	float hours = minutes/60;
	printf("Time in hours will be:\t%f\n", hours);
}
