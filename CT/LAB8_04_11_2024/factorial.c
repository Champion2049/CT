#include<stdio.h>

void factorial(int a);
void main(){
	int a;
	printf("Enter a number:\t");
	scanf("%d", &a);
	factorial(a);
}
void factorial(int a){
	int fact = 1;
	for(int i = 1; i <= a; i++)
	{
		fact*=i;
	}
	printf("Factorial of the number %d is: \t%d\n", a, fact);
}
