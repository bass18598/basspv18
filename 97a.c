
#include<stdio.h>
int main() 
{
	int a,b,i=0;
	printf("enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
	  b=a%10;
	  i=i*10+b;
	  a=a/10;
	}
	printf("%d",i);
	return 0;
}
