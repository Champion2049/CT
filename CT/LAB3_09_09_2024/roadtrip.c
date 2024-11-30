#include<stdio.h>

void main()
{
	int distance;
	int mileage;
	int speed;
	int fr;
	printf("Enter distance between Mumbai and Delhi(in kms):\n");
	scanf("%d",&distance);
	printf("Enter mileage of car:\n");
	scanf("%d",&mileage);
	printf("Enter fuel rate per L:\n");
	scanf("%d",&fr);
	printf("Enter average car speed(in km/h):\n");
	scanf("%d", &speed);
	float litres = distance/mileage;
	float fc = litres*fr;
	int jt = distance/speed;
	printf("Fuel cost will be:\t%f\n", fc);
	printf("The journey time will be(in hours):\t%d\n", jt);
}
