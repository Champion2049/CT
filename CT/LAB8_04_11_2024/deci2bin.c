#include<stdio.h>

void deci2bin(int a);
void main(){
	int a;
	printf("Enter a decimal number:\t");
	scanf("%d", &a);
	deci2bin(a);
}
void deci2bin(int a){
	printf("Binary number is:\n");
	int binaryNum[32];
    	int i = 0;
    	while (a > 0) {
        	binaryNum[i] = a % 2;
        	a = a / 2;
        	i++;
    	}
    	for (int j = i - 1; j >= 0; j--){
        	printf("%d", binaryNum[j]);
	}
	printf("\n");
}
