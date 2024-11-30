#include<stdio.h>

void main()
{
	float avgm;
	printf("Enter average marks:\t");
	scanf("%f", &avgm);
	if(avgm>80)
	{
		printf("A grade.\n");	
	}
	else if(80>=avgm && avgm>60)
	{
		printf("B grade.\n");	
	}
	else if(60>=avgm && avgm>40)
	{
		printf("C grade.\n");	
	}
	else
	{
		printf("F grade.\n");	
	}
}
