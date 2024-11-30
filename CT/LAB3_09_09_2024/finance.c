#include<stdio.h>

void main()
{
	int hours;
	int rate;
	int weeks;
	printf("Enter hours,rate,weeks:\n");
	scanf("%d\n%d\n%d", &hours,&rate,&weeks);
	int pay = hours*rate*weeks;
	printf("The monthly salary is:\t%d\n", pay);
}
