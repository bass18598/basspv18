#include<stdio.h>
int main()
{
int a;
    printf("\n enter the number:\n");
    scanf("%d",&a);
    while(a%10!=0)
    {
        a++;
    }
printf("\n the nearest greater multiple of 10 is \n%d",a);
return 0;
}
