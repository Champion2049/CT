#include <stdio.h>

void main()
{
	int side;
	printf("Enter the side of a cube:\n");
	scanf("%d", &side);
	int area = side*side*side;
	printf("Volume of a cube is:\t%d\n", area);
}
