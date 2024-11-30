#include<stdio.h>
void main()
{
	float i1;
	float i2;
	float i3;
	float i4;
	float i5;
	printf("Enter price of Items:\n");
	scanf("%f\n%f\n%f\n%f\n%f", &i1,&i2,&i3,&i4,&i5);
	printf("Item 1 costs:\t%f\n", i1);
	printf("Item 2 costs:\t%f\n", i2);
	printf("Item 3 costs:\t%f\n", i3);
	printf("Item 4 costs:\t%f\n", i4);
	printf("Item 5 costs:\t%f\n", i5);
	float total = i1+i2+i3+i4+i5;
	printf("Total cost of the items is:\t%f\n", total);
}
