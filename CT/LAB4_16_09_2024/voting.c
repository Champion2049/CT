#include<stdio.h>

void main()
{
	int age;
	printf("Enter your age:\t");
	scanf("%d", &age);
	if(age>=18){
		printf("Eligible for voting.\n");
	}
	else{
		printf("Not eligible for voting.\n");
	}
}
