#include<stdio.h>
#include<math.h>
int main()
{
	int x, i;
	float result = 0;
	
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	
	for(i = 1; i <= 7; i++)
	{
		if(i == 1)
		    result = result + pow((x - 1.0) / x, i);
		else
		     result  = result + (1.0/2) * pow ( ( x - 1.0) / x, i);
	}
	
	printf("log(%d) = %f\n",x,result);
	
	return 0;
}
