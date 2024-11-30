#include<stdio.h>

int add();
int add1();
int main(){
	int s;
	add();
	s = add1();
	printf("Sum = %d\n", s);
}
int add(){
	int a,b;
	printf("Enter 2 numbers:\t");
	scanf("%d%d", &a, &b);
	printf("Sum = %d\n", a+b);
}
int add1(){
	int a,b;
	printf("Enter 2 numbers:\t");
	scanf("%d%d", &a, &b);
	int s = a+b;
	return(s);
}
