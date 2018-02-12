#include <stdio.h>
int main(void) 
{

	int a[20];
	int n,i,m=a[0];
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("\n enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	printf("\nthe max of the numbers is:%d",m);
	return 0;

}
