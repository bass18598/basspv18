
#include<stdio.h>
int main()
{
int m=0,i;
printf("enter the number: \n");
scanf("%d",&m);
while(m!=0)
{
    m=m/10;
    ++i;
}
    printf("count number is :%d",i);
}


