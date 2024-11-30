#include<stdio.h>
#include<math.h>

void main(){
	double a,b,c;
	printf("Enter values of x,y,z :");
	scanf("%le%le%le", &a, &b, &c);
	double D = (b*b)-(4*a*c);
	int d;
	if(D>0){
		d = 1;
	}
	else if(D<0){
		d = -1;
	}
	else{
		d = 0;
	}
	switch(d){
		case 0:
			double roots = (-b+(sqrt(D)));
			roots = roots/2*a;
			printf("Equal roots:\t%le\n", roots);
			break;
		case 1:
			double r1 = (-b+(sqrt(D)));
			r1 = r1/2*a;
			double r2 = (-b-(sqrt(D)));
			r2 = r2/2*a;
			printf("Two roots:\t%le, %le\n", r1, r2);
			break;
		default:
			printf("No Real roots.");
	}
}
