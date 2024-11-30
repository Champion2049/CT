#include<stdio.h>

void bubble(int arr[], int n);
void selection(int arr[], int n);
void insertion(int arr[], int n);
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
	selection(nums,n);
	insertion(nums,n);
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
void selection(int arr[], int n){
	for(int i = 0; i < n-1; i++)
	{
		int mindex = i;
		for(int j = i; j < n; j ++)
		{
			if(arr[j]<arr[mindex])
			{
				mindex = j;
			}
		}
		int temp = arr[i];
        	arr[i] = arr[mindex];
        	arr[mindex] = temp;
	}
	printf("The sorted array is:\n");
	int i = 0;
	while(i<n)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
void insertion(int arr[], int n){
	for (int i = 1; i < n; i++) {
	int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        }
	printf("The sorted array is:\n");
	int i = 0;
	while(i<n)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
