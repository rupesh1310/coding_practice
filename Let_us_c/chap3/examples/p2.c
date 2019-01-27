/* if his basic salary is less than Rs1500,then HRA=10% of the basic salary and DA=90% of basic salary.if his basic salary is either equal to or above Rs.1500,then HRA=Rs.500 and DA=98% of the basic salary is input through the keyboard wap to find his gross salary*/

#include<stdio.h>
int main()
{
	float bs,gs,hra,da;
	
	printf("enter basic salary");
	scanf("%f",&bs);
	
	if(bs < 1500)
	{
		hra = bs * 10/100;
		da  = bs * 90/100;
	}
	 else
		{
			hra = 500;
			da  = bs * 98/100;
		}
	gs = bs + hra + da;
	printf("gross salary=Rs.%f\n",gs);
	
	return 0;
				
}
