#include<stdio.h>
#include<string.h>
int main()
{
int a,b;
printf("enter the 1st number:\n");
scanf("%d",&a);
printf("enter the 2nd number:\n");
scanf("%d",&b);
printf("before swapping:%d%d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping:%d%d",a,b);
}
