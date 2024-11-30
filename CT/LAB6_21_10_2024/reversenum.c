#include<stdio.h>
#include<math.h>

int main(){
	int num,temp,count=0;
	printf("Enter a number:\t");
	scanf("%d", &num);
	temp = num;
	while (temp>0){
		count+=1;
		temp = temp/10;
	}
	int reversed=0;
	while (count>0){
		if((num%10)!=0){
			reversed += (num%10)*pow(10,count);
			num = num/10;
			count-=1;
		}
		else {
		num = num/10;
		count-=1;
		}
	}
	reversed = reversed/10;
	printf("Reversed number is:\t%d\n", reversed);
}
