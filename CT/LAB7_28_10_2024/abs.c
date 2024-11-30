#include<stdio.h>
#include<stdlib.h>

int absolute(int x);
void main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d", &num);
	absolute(num);
}
int absolute(int x){
	int ab = abs(x);
	printf("Absolute value of x is = %d\n", ab);
}
