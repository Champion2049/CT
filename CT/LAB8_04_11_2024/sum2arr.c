#include<stdio.h>

int sum(int r1, int r2, int c1, int c2);
void main(){
	int r1,c1,r2,c2;
	printf("Enter number of rows:\t");
	scanf("%d", &r1);
	printf("Enter number of columns:\t");
	scanf("%d", &c1);
	printf("Enter number of rows:\t");
	scanf("%d", &r2);
	printf("Enter number of columns:\t");
	scanf("%d", &c2);
	sum(r1,r2,c1,c2);
}
int sum(int r1, int r2, int c1, int c2){
	int nums1[r1][c1];
	int nums2[r2][c2];
	for(int i =0; i < r1; i++)
	{
		for(int j = 0; j < c1; j++){
			printf("Enter element %dx%d:\t", i+1, j+1);
			scanf("%d", &nums1[i][j]);
		}
	}
	for(int i =0; i < r2; i++)
	{
		for(int j = 0; j < c2; j++){
			printf("Enter element %dx%d:\t", i+1, j+1);
			scanf("%d", &nums2[i][j]);
		}
	}
	int r,c;
	if(r1>r2)
	{
		r = r1;
	}
	else
	{
		r = r2;
	}
	if(c1>c2)
	{
		c = c1;
	}
	else
	{
		c = c2;
	}
	int sum[r][c];
	for(int i =0; i < r; i++)
	{
		for(int j = 0; j < c; j++){
			sum[i][j] = nums1[i][j] + nums2[i][j];
		}
	}
	printf("The sum of both the matrices is:\n");
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++){
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
}
