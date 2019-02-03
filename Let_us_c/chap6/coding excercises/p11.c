#include<stdio.h>
int main()
{
	int hour;
	
	for(hour == 0; hour <= 23; hour++)
	{
	  if(h == 0)
	{
	   printf("12 midnight \n");
	   continue;
	}
	if(hour < 12)
	   printf("12 Midnight\n');
	if(hour == 12)
	   printf("12 Noon\n");
	if(hour > 12)
	   printf("%d PM\n", hour % 2);
	}
	return 0;
}

