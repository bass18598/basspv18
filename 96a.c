#include<stdio.h>
void main()
{
int z,i,count=0;
printf("enter the value\n");
scanf("%d",&z);
for(i=2;i<=(z/2);i++)
{
if(z%i==0)
{
count++;
}
}
if(count==0)
{
printf("not composite");
}
else
{
printf("composite");
}
}
