/* While purchasing certain items a discount of 10% is offered if the quantity purchased is more than 1000.if the quantity and price per item are input through keyboard wap to calculate total expenses */

#include<stdio.h>
int main()
{
	int qty, dis;
	float rate, tot;
	printf("enter quantity and number");
	scanf("%d %f",&qty,&rate);
	if( qty > 1000)
		dis = 100;
		else
		dis = 0;
	
	tot = (qty*rate) -(qty*rate*dis/100);
	printf("total expenses =Rs.%f\n",tot);
	return 0;
}
	
