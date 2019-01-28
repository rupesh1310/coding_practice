#include<stdio.h>
int main()
{
	float hard,carbon,tensile;
	
	printf("Enter the hardness of the steel:\n");
	scanf("%f",&hard);
	
	printf("Enter the carbon of the steel:\n");
	scanf("%f",&carbon);
	
	printf("Enter tensile strength:\n");
	scanf("%f",&tensile);
	
	if(hard > 50 && carbon < 0.7 && tensile > 5600)
	{
		printf("Grade 10\n");
			
	}
	if(hard > 50 && carbon < 0.7 && tensile <= 5600)
	{
		printf("Grade 9\n");
		
		
	} 
	if(hard <= 50 && carbon < 0.7 && tensile > 5600)
	{
		printf("Grade 8\n");
			
	}
	if(hard > 50 && carbon >= 0.7 && tensile > 5600)
	{
		printf("Grade 7\n");
		
	}
	if(hard > 50 || carbon < 0.7 || tensile > 5600)
	{
		printf("Grade 6\n");
		
	}
		printf("Grade 5\n");
		
		return 0;
	}	
	
