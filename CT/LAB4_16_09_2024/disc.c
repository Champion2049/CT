#include<stdio.h>

void main()
{
	int a;
	int b;
	int c;
	printf("Enter coeff. of x:\t");
	scanf("%d", &a);
	printf("Enter coeff. of y:\t");
	scanf("%d", &b);
	printf("Enter constant:\t");
	scanf("%d", &c);
	int det = (b*b) - (4*a*c);
	int points = 0;
	if(det == 0)
	{
		points+=0;
	}
	if(det >= 0)
	{
		points+=20;
	}
	if(det <= 0)
	{
		points+=10;
	}
	printf("Points are:\t%d\n", points);
}
