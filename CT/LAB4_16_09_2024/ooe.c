#include<stdio.h>

void main()
{
	int num;
	printf("Enter a number:\t");
	scanf("%d", &num);
	if(num%2==0){
		printf("It is an even number.\n");
	}
	else{
		printf("It is an odd number.\n");
	}
}
