/* Wap to find greatest of all three numbers entered using conditional opereators */
#include<stdio.h>
int main()
{
	int n1,n2,n3,great;
	
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	great = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	
	printf("greatest numbers is: %d",great);
	
	return 0;
} 
