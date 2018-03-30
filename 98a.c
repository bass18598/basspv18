#include<stdio.h>
int main() 
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i)
		{
			printf("Misseed number is %d",i);
			break;
		}
	}
	return 0;
}
