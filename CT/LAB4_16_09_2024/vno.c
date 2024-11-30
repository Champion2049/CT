#include<stdio.h>
#include <ctype.h>

void main()
{
	char inp;
	printf("Enter anything:\t");
	scanf("%c", &inp);
	int points = 0;
	if(tolower(inp) == 'a' || tolower(inp) == 'e' || tolower(inp) == 'i' || tolower(inp) == 'o' || tolower(inp) == 'u')
	{
		points+=5;
	}
	else if(isdigit(inp))
	{
		points+=10;
	}
	else
	{
		points+=0;
	}
	printf("Points are:\t%d\n", points);
}
