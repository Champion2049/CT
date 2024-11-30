#include<stdio.h>

void main(){
	int i=0,n;
	printf("Enter a number:\t");
	
	scanf("%d", &n);
	
	while(i<n){
		int j=0;
		while(j<2*i+1){
			printf("*");
			j+=1;
		}
		i+=1;
		printf("\n");
		if(i>n)
		{
			break;
		}
	}
}
