#include <stdio.h>

int main() 
{
	int a,b=1,i,n;
	for(i=0;i<100000000000000000;i++)
	{
	printf("enter the two numbers:\n");
	scanf("%d%d",&a,&b);
	if(b!=0)
	{
	printf("%d\n",b-a);
	break;
	}
		
	}
	return 0;
}
