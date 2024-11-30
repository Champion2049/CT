#include<stdio.h>

void avgm(int arr[], int n);
void main(){
	int n;
	printf("Enter number of subjects:\t");
	scanf("%d", &n);
	int nums[n];
	int i = 0;
	while(i<n)
	{
		printf("Enter marks for subject %d:\t", i+1);
		scanf("%d", &nums[i]);
		i++;
	}
	avgm(nums,n);
}
void avgm(int arr[], int n){
	float total = 0;
	for(int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	printf("Average marks in %d subjects will be:\t%f\n", n, (total/n));
}
