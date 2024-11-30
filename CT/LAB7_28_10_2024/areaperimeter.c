#include<stdio.h>
int area(int a);
int perimeter(int a);
void main(){
	int s;
	printf("Enter side of a square:\t");
	scanf("%d", &s);
	area(s);
	perimeter(s);
}
int area(int a){
	int area = a*a;
	printf("Area = %d\n", area);
}
int perimeter(int a){
	int perimeter = a*4;
	printf("Perimeter = %d\n", perimeter);
}
