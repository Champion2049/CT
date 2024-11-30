#include<stdio.h>

void main()
{
	float h;
	int w;
	printf("Enter height (in m):\t");
	scanf("%f", &h);
	printf("Enter weight (in kg):\t");
	scanf("%d", &w);
	float bmi = w/(h*h);
	if(bmi >= 25)
	{
		printf("You are overweight.\n");
	}
	else if( bmi < 25 && bmi >= 18.5)
	{
		printf("You are normal.\n");
	}
	else
	{
		printf("You are underweight.\n");
	}
}
