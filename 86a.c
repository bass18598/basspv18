
#include <stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int l,i,j,flag=0;
    printf("enter the elements:\n");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(s[i]==s[j])
            {
            flag=1;
            break;
            }
        
            else
            continue;
        }
    }
    
    if(flag==0)
    printf("isogram");
    else
    printf("non isogram");
    return 0;
}
