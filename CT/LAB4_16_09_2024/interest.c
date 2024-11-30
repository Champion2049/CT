#include<stdio.h>
#include<math.h>

float main()
{
	int p;
	int n;
	int t;
	float r;
	printf("Enter principal amount:\t");
	scanf("%d",&p);
	printf("Enter rate of interest:\t");
	scanf("%f",&r);
	printf("Enter time period in months:\t");
	scanf("%d",&t);
	printf("Enter no.of times interest applied per time period:\t");
	scanf("%d",&n);
	float si = ((p*r*t)/1200);
	float ci = p*(1+(r/n));
	//float ci = pow(ci,n*t);
	printf("The simple interest is:\t%f\n", si);
	printf("The principal after simple interest is:\t%f\n", p+si);
	printf("The compound interest is:\t%le\n", pow(ci,n*t));
}
