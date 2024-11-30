#include<stdio.h>

int sum(int);
int main(){ 
	int n; 
	printf("Enter number of elements to calculate sum of:\t"); 
	scanf("%d",&n); 
	int s = sum(n);
	printf("Sum is :\t%d\n", s);
}
int sum(int n){
	int calcsum = 0;
	if(n==0)
	{
		return 0;
	}
	else
	{
		return(n+sum(n-1));
	}
 }
