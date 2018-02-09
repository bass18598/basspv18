#include <stdio.h>
#include<string.h>
int main()
{
	int i,x;
	char b[10];
	printf("enter the number:");
	scanf("%s",b);
	x=strlen(b);
	for(i=0;i<x;i++)
	{
		printf("\t %c",b[i]);
	}
	return 0;
}
