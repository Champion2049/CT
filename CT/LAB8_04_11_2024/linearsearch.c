#include<stdio.h>

void lsearch(int arr[], int n, int search);
void main(){
	int n,search;
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
	printf("Enter search element:\t");
	scanf("%d", &search);
	lsearch(nums, n, search);
}
void lsearch(int arr[], int n, int search){
	int found = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == search)
		{
			printf("Search element is at %d position.\n", i+1);
			found+=1;
		}
	}
	if(found<1)
	{
		printf("Search element not present in the given array.\n");
	}
}
