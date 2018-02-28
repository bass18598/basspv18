#include<stdio.h>
int main()
{
int i,j,k;
printf("enter the number:");
scanf("%d",&i);
printf("left number and right numbers:");
scanf("%d%d",&j,&k);
if(i>j&&i<k)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
