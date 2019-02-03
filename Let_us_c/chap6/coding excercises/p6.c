#include<stdio.h>
#include<math.h>
int main()
{
	float q,r,n,p,a;
	int i;
	
	for(i = 1;i < 10; i++)
	{
		printf("Enter the principal amount:\n");
		scanf("%f",&p);
		printf("Enter the rate of interest:\n");
		scanf("%f",&r);
		printf("Enter the number of years:\n");
		scanf("%f",&n);
		printf("Enter the compounding period:\n");
		scanf("%f",&q);
		
		a = p + pow ((1 + (r/q)), (n * q));
		
		printf("\n\nTotal amount = %f\n",a);
	}
	
	return 0;
}
