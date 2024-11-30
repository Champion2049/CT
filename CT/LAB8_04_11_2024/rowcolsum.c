#include <stdio.h>

void csum(int r, int c, int arr[r][c]);
void rsum(int r, int c, int arr[r][c]);

void main() {
	int r, c;
	printf("Enter number of rows:\t");
	scanf("%d", &r);
	printf("Enter number of columns:\t");
	scanf("%d", &c);
	int nums[r][c];
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			printf("Enter element %dx%d:\t", i+1, j+1);
			scanf("%d", &nums[i][j]);
		}
	}
	csum(r, c, nums);
	rsum(r, c, nums);
}

void csum(int r, int c, int arr[r][c]) {
	int colsum[c];
	for(int i = 0; i < c; i++) {
		colsum[i] = 0;
		for(int j = 0; j < r; j++) {
			colsum[i] += arr[j][i];
		}
	}
	printf("Column sum is:\n[");
	for(int i = 0; i < c; i++) {
		printf("%d", colsum[i]);
		if (i < c - 1) printf(", ");
	}
	printf("]\n");
}

void rsum(int r, int c, int arr[r][c]) {
	int rowsum[r];
	for(int i = 0; i < r; i++) {
		rowsum[i] = 0;
		for(int j = 0; j < c; j++) {
			rowsum[i] += arr[i][j];
		}
	}
	printf("Row sum is:\n[");
	for(int i = 0; i < r; i++) {
		printf("%d", rowsum[i]);
		if (i < r - 1) printf(", ");
	}
	printf("]\n");
}
