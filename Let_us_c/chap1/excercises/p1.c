/*Ramesh basic salary is input through the keyboard.His dearance allowance is 40% is of basic salary,and house rent allowance is 20% of basic salary.WAP to calculate his gross salary */

#include<stdio.h>
int main() 
{
	float bp,da,hra,grpay;
	
	printf("\n Enter basic salary of Ramesh:");
	scanf("%f",&bp);

	da = 0.4*bp;
	hra = 0.2*bp;
	grpay = bp+da+hra;

	printf("Basic salary of Ramesh=%f\n",bp);
	printf("Dearance Allowance =%f\n",da);
	printf("House rent Allowance=%f\n",hra);
	printf("Gross pay of ramesh is %f\n",grpay);

	return 0;
}

