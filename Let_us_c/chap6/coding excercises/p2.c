#include<stdio.h>
int main()
{
	int i = 1,j;
	float fact,sum = 0.0;
	
	while(i<=7)
	{
		fact = 1.0;
		for(j=1;j<=i;j++)
			fact = fact*j;
		
		sum = sum + i/fact;
		i++;
	}
	printf("Sum of series = %f\n",sum);
	
	return 0;
}
