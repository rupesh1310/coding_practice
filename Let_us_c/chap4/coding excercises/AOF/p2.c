/*Determine whether a charcter is special symbol or not */
#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter character:\n");
	scanf("%c",&ch);
	((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123)) ?
		printf("character entered is a special symbol") : 
		printf("character entered is not a special symbol");
	
	return 0;
}
