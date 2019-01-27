/* The distance between two cities in km is input through keyboard.WAP to convert and print this distance in meters,feet,inches and cm */

#include<stdio.h>

int main()
{
	float km,m,cm,ft,inch;
	printf("\nEnter the distance in km:");
	scanf("%f",&km);

	m = km*1000;
	cm = m*100;
	inch = cm/2.54;
	ft = inch/12;

	printf("distance in meters=%f\n",m);
	printf("distance in centimeters=%f\n",cm);
	printf("distance in feet=%f\n",ft);
	printf("distance in inch=%f\n",inch);

	return 0;
}


