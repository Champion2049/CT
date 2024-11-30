#include<stdio.h>

void main()
{
	int num;
	printf("Enter a number:\t");
	scanf("%d", &num);
	if(num>0){
		printf("It is a positive number.\n");
	}
	if(num<0){
		printf("It is a negative number.\n");
	}
}
