#include<stdio.h>

void primeornot(int a);
void main(){
	int a;
	printf("Enter a number:\t");
	scanf("%d", &a);
	if(a < 2)
	{
		printf("Enter a valid input.\n");
	}
	else
	{
		primeornot(a);
	}
}
void primeornot(int a){
	int count = 0;
	for(int i = 1; i<a; i++)
	{
		if(a%i == 0)
		{
			count+=1;
		}
	}
	if(count > 1)
	{
		printf("Not a prime number.\n");
	}
	else
	{
		printf("Prime number.\n");
	}
}
