#include<stdio.h>

int max(int a, int b, int c);
void main(){
	int a,b,c;
	printf("Enter 3 numbers:\n");
	scanf("%d%d%d", &a, &b, &c);
	max(a,b,c);
}
int max(int a, int b, int c){
	if(a>=b){
		if(a>=c){
			printf("%d is the greatest number of them all.\n", a);
		}
	}
	else if(b>=a){
		if(b>=c){
			printf("%d is the greatest number of them all.\n", b);
		}
		else{
		printf("%d is the greatest number of them all.\n", c);
		}
	}
}
	
