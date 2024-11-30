#include<stdio.h>

int evenOdd(int x);
void main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d", &num);
	evenOdd(num);
}
int evenOdd(int x){
	if(x%2==0){
		printf("It is even.\n");
	}
	else{
		printf("It is odd.\n");
	}
}
