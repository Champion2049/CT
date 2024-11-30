#include<stdio.h>

void main()
{
	float x;
	float y;
	printf("Enter x coordinate:\t");
	scanf("%f", &x);
	printf("Enter y coordinate:\t");
	scanf("%f", &y);
	if(x>=0 && y>=0)
	{
		printf("First Quadrant.\n");
	}
	else if(x<=0 && y>=0)
	{
		printf("Second Quadrant.\n");
	}
	else if(x<=0 && y<=0)
	{
		printf("Third Quadrant.\n");
	}
	else if(x>=0 && y<=0)
	{
		printf("Fourth Quadrant.\n");
	}
}
