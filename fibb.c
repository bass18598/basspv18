#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n,t1=0,t2=1,next;
  printf("enter the numbers");
  scanf("%d,&n");
  printf("fibonacci series:");
  for(i=0;i<=n;i++)
  {
     printf("%d, t1");
    next=t1+t2;
    t1=t2;
    t2=next;
  }return 0;
}
