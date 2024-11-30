#include<stdio.h>

void main()
{
	int num1;
	int num2;
	int num3;
	printf("Enter 3 numbers:\t");
	scanf("%d%d%d", &num1, &num2, &num3);
	if(num1>num2){
		if(num1>num3){
			printf("num1 is the greatest.\n");
		}
	}
	if(num2>num1){
		if(num2>num3){
			printf("num2 is the greatest.\n");
		}
	}
	if(num3>num2){
		if(num3>num1){
			printf("num3 is the greatest.\n");
		}
	}
}
