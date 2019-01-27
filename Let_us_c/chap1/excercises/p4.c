/*Temparature of a city in f degreess is input through the keyboard.WAP to convert this temperature into C degrees */
#include<stdio.h>
int main()
{
	float fr,cent;
	printf("\nEnter the temparature:");
	scanf("%f",&fr);

	cent=5.0/9.0*(fr-32);
	printf("Temperature in centigrade=%f\n",cent);

	return 0;

}

