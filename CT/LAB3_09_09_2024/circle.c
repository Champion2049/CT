#include<stdio.h>

void main()
{
	int radius;
	printf("Enter radius of a circle:\n");
	scanf("%d", &radius);
	float area  = ((3.14)*radius*radius);
	printf("Area of the circle is:\t%f\n", area);
}
