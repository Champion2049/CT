#include<stdio.h>

void main()
{
	float temp;
	printf("Enter tempertature in Fahrenheit:\n");
	scanf("%f",&temp);
	float celcius = ((temp-32)*5)/9;
	printf("The temperature in celcius will be:\t%f\n", celcius);
}
