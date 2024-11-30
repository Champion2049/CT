#include<stdio.h>

int largestnum(int arr[], int n);
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
	int largest = largestnum(nums,n);
	printf("The largest element in the array is:\t%d\n", largest);
}
int largestnum(int arr[], int n)
{
	int largest = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i]>largest)
		{
			largest = arr[i];
		}
	}
	return largest;
}
