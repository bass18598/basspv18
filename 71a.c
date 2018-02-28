#include <stdio.h>
#include <string.h>
int main(){
    char s[20];
    int i, l;
    int f = 0;
    
    printf("Enter a string:");
    scanf("%s", s);
    l = strlen(s);
    for(i=0;i < l ;i++){
        if(s[i] != s[l-i-1]){
            f = 1;
            break;
          
        }
      
    }
    if (f==1) {
        printf("%s is not a palindrome", s);
    }    
    else {
        printf("%s is a palindrome", s);
    }
    return 0;
}
