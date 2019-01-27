/*if the cost price and selling price of an item is input through the keyboard wap to determine
whether the seller has made profit or incurred loss.also determine how much profit he made or loss
he incurred*/

#include<stdio.h>
int main()
{
	float cp,sp,p,l;
	
	printf("\nEnter the cost price and selling price");
	scanf("%f%f",&cp,&sp);
	
	p = sp - cp;
	l= cp - sp;
	
	if(p>0)
		printf("the seller has made  a profit of Rs.%f\n",p);
		
	if(l>0)
		printf("the seller is in loss by Rs.%f\n",l);
	if(p==0)
		printf("there is no loss, no profit\n");
		
	return 0;

}
