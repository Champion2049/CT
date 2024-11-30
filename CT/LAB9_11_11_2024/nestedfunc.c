#include<stdio.h>

void sum_array(int arr[], int n);
void printsum(int sum);
int count(int num);
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
	sum_array(nums,n);
}
void sum_array(int arr[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	printsum(sum);
}
void printsum(int sum){
	printf("Sum of the elements of the array is:\t%d\n", sum);
	int c = count(sum);
	printf("No. of elements in the sum are:\t%d\n", c);
}
int count(int num){
	int digits = 0;
	while(num/10>=1)
	{
		digits++;
		num = num/10;
	}
	return digits+=1;
}
