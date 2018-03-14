#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=(a>b)?a:b;
	while(1)
	{
		if(lcm%a==0 && lcm%b==0)
		{
			printf("\nlcm value is=%d",c);
			break;
		}
	++c;
	}
	return 0;
}
