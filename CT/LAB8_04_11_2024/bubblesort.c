#include<stdio.h>

void bubble(int arr[], int n);
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
	bubble(nums,n);
}
void bubble(int arr[], int n){
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++){
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				temp = 0;
			}
		}
	}	
	printf("The sorted array is:\n");
	int i = 0;
	while(i<n)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
