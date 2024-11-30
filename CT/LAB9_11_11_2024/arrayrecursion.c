#include<stdio.h>

int parray(int nums[], int n);
void main(){
	int n;
	printf("Enter number of elements:\t");
	scanf("%d", &n);
	int nums[n];
	int i = 0;
	while(i<n)
	{
		printf("Enter element %d:\t", i+1);
		scanf("%d", &nums[i]);
		i++;
	}
	printf("The array printed is:\n");
	parray(nums,n);
}
int parray(int nums[], int n){
	if(n==0)
	{
		return 0;
	}
	else
	{
		parray(nums, n-1);
		printf("%d\n", nums[n-1]);
	}
}
