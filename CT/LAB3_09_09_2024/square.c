#include<stdio.h>

void main()
{
	int side;
	printf("Enter side of a square:\n");
	scanf("%d", &side);
	int area = side*side;
	printf("Area of the square is:\t%d\n", area);
}
