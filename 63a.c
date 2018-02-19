#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int d=0,c=1,i;
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		d=++c;
	}
	printf("%d",d);
	return 0;
}  
