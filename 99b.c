#include<stdio.h>
int main()
{
int n,r,num=1;
printf("Enter the n");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
num=num*r;
n=n/10;
}
printf("The mul is %d",num);
return 0;
}
