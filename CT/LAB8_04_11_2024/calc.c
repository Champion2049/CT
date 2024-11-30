#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void main(){
	int a,b,choice;
	printf("Enter number of element 'a':\t");
	scanf("%d", &a);
	printf("Enter number of element 'b':\t");
	scanf("%d", &b);
	printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division.:\t");
	scanf("%d", &choice);
	if(choice == 1)
	{
		printf("Sum = %d\n", add(a,b));
	}
	if(choice == 2)
	{
		printf("Difference = %d\n", sub(a,b));
	}
	if(choice == 3)
	{
		printf("Multiplication = %d\n", mul(a,b));
	}
	if(choice == 4)
	{
		printf("Division = %d\n", div(a,b));
	}
	else 
	{
		if (choice > 4 && choice <1){
		printf("Enter valid choice.\n");
		}
	}
}
int add(int a, int b){
	return (a+b);
}
int sub(int a, int b){
	return (a-b);
}
int mul(int a, int b){
	return (a*b);
}
int div(int a, int b){
	if(b == 0)
	{
		printf("Division by 0 is not possible.\n");
		return 0;
	}
	else
	{
		return (a/b);
	}
}
