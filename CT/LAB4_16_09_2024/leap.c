#include<stdio.h>

void main()
{
	int year;
	printf("Enter year:\t");
	scanf("%d", &year);
	if(year%4==0)
	{
		printf("It is a leap year.\n");
	}
	else
	{
		printf("It is not a leap year.\n");
	}
}
