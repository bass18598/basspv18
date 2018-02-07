#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number:\n");
    scanf("%d",&b);
    a=(b&(b-1));
    if(a==0)
    printf("yes");
    else
    printf("no");
    return 0;
}
