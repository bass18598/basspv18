#include<stdio.h>
int main()
{
int n,i,a[10],high,low;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
high=a[0];
low=a[0];
for(i=0;i<n;i++)
{
if(a[i]>high)
high=a[i];
if(a[i]<low)
low=a[i];
}
printf("%d\n",high);
printf("%d\n",low);
return 0;
}
