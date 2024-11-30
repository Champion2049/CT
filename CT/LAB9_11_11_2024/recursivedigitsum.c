#include<stdio.h>

int sum(int);
int main(){ 
	int n; 
	printf("Enter number:\t"); 
	scanf("%d",&n); 
	int s = sum(n);
	printf("Sum of digits is:\t%d\n", s);
}
int sum(int n){
	if(n==0)
	{
		return 0;
	}
	else
	{
		return((n%10)+sum(n/10));
	}
 }
