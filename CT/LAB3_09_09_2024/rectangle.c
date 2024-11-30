#include<stdio.h>

void main()
{
	double length;
	double breadth;
	printf("Enter length of a rectangle:\n");
	scanf("%le", &length);
	printf("Enter breadth of a rectangle:\n");
	scanf("%le", &breadth);
	int area = length*breadth;
	printf("Area of rectangle is:\t%d\n",area);
}
