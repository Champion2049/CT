#include<stdio.h>

int add(int a,int b);
int add1(int a,int b);
int main(){
	int a,b;
	printf("Enter 2 numbers:\t");
	scanf("%d%d", &a, &b);
	add(a,b);
	int s = add1(a,b);
	printf("Sum = %d\n", s);
}
int add(int a,int b){
	printf("Sum = %d\n", a+b);
}
int add1(int a,int b){
	int s = a+b;
	return(s);
}
