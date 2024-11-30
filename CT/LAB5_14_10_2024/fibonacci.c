#include<stdio.h>

void main(){
	int n;
	printf("Enter a number:\t");
	scanf("%d", &n);
	int i = 0;
	printf("0\n1\n");
	int a = 0;
	int b = 1;
	while(i<n-2)
	{
		printf("%d\n", a+b);
		int temp = a;
		a = b;
		b = temp+b;
		i++;
	}
}
