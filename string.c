#include<stdio.h>
#include<string.h>
void main()
{
  char a[30],b[40];
  int i,j,str1,str2;
  printf("enter the first string:\n");
  scanf("%s",& a);
  printf("enter the second string:\n");
  scanf("%s",& b);
  i=strlen(a);
  j=strlen(b);
  if(i=j)
  {
    printf("%s,\n a");
  }
  else if(a>b)
  {
    printf("%s,\n a");
  }
  else
  {
    printf("%s, \n b");
  }
}
