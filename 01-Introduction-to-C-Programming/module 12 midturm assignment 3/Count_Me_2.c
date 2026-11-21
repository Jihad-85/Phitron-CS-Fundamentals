#include <stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    scanf("%s",&s);

    int len = strlen(s);

    int count = 0;
      int i = 0;
    while(i < len)
    {
      if(s[i] == 'a' ){
             i++;
         }
        else if(s[i] == 'e' ){
            i++;
         }
        else if(s[i] == 'i' ){
            i++;
         }
        else if(s[i] == 'o' ){
            i++;
         }
        else if(s[i] == 'u' ){
            i++;
         }
         else{
               count++;
                i++;
         }
         
         
    
    }
    printf("%d",count);
    
    return 0;
     
 
    }
