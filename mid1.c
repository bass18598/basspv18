
#include<stdio.h> 
void main()
{
int a[10],i,n;
printf("enter element");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n array %d",i);
}
int low=a[0],high=n,mid;
if(low<high)
{
	middle=(low+high)/2;
	printf("\n%d",middle);
}
}
