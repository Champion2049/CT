#include<stdio.h>

void main()
{
	float amount;
	printf("Enter total bill amount:\t");
	scanf("%f", &amount);
	float discount = 0;
	if(amount<=1000)
	{
		discount = (amount*5)/100;
		printf("Discount will be:\t%f\n", discount);
		printf("Final bill wil be:\t%f\n", amount-discount);
	}
	else if(amount>1000 && amount<=5000)
	{
		discount = (amount*10)/100;
		printf("Discount will be:\t%f\n", discount);
		printf("Final bill wil be:\t%f\n", amount-discount);
	}
	else
	{
		discount = (amount*20)/100;
		printf("Discount will be:\t%f\n", discount);
		printf("Final bill wil be:\t%f\n", amount-discount);
	}
}
