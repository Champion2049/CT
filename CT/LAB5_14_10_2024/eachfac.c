#include<stdio.h>

int main(){
	int i=0,num1,num2;
	printf("Enter a lower range:\t");
	scanf("%d", &num1);
	printf("Enter a upper range:\t");
	scanf("%d", &num2);
	if(num1>num2)
	{
		printf("Error range.\n");
		return 0;
	}
	else if(num1<0)
	{
		num1 = 0;
	}
	i = num1;
	while(i<num2){
		int temp = 1;
		if(i == 0){
			printf("1\n");
		}
		else{
		int j = 1;
			while (j<=i)
			{
            			temp *= j;
            			j++;
        		}
			printf("%d\n", temp);
		}
		i++;
	}
}
