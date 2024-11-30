#include<stdio.h>
#include<math.h>

void main(){
	int n;
	printf("Enter a number:\t");
	scanf("%d", &n);
	int i = 1;
	int nD = 0;
	int num = 0,sum=0;
	int temp = n;
	while(n>0)
	{
		nD+=1;
		n = n/10;
		i = n;
	}
	n = temp;
	while(temp>0)
	{
		num = temp%10;
		sum += pow(num,nD);
		temp = temp/10;
	}
	if(n == sum)
	{
		printf("It is an armstrong number.\n");
	}
	else{
		printf("It is not an armstrong number.\n");
	}
}
