#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char a[200]={"happy   life"};
 int i,count=0;
 for(i=0;a[i]!='\0';i++)
 {
     if(a[i]==' ')
        count++;
 }
 printf("number of words: %d",count);
 return 0;
}
