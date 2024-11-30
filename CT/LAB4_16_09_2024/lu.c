#include<stdio.h>
#include <ctype.h>

void main()
{
	char inp;
	printf("Enter anything:\t");
	scanf("%c", &inp);
	if(islower(inp))
	{
		printf("It is lowercase.\n");
	}
	else
	{
		printf("It is uppercase.\n");
	}
}
