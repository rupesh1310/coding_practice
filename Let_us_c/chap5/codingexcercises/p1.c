/* WAP to calculate overtime pay od 10 employees.Overtimes is paid at the rate of Rs12.0 per hour for every hour worked above 40hrs.Assume that employees do not work for fractional part of an hour */

#include<stdio.h>
int main()
{
	float otpay;
	int hour, i = 1;
	
	while(i <= 10)
	{
		printf("Enter no. of hours worked:\n");
		scanf("%d",&hour);		

	if(hour >= 40)
	{
		otpay = (hour - 40) * 12;	
		printf("No of hours worked = %d\n Overtime pay = Rs.%f\n",hour,otpay);
	}
	else
	{
		otpay = 0;
		printf("No. of hours worked(%d) is less than 40hrs.\nHence no overtime pay\n",hour);
	}
	 i++;
	}
	return 0;
}
