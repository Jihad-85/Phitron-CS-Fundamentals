#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
   
    scanf("%s %s",&a,&b);

   int c = strcmp(a,b);

      if(c == 0){
            printf("%s",b);
            
        }
        else if(c <= 0){
             printf("%s",a);
       
        }
        else if(c >= 0){
             printf("%s",b);
        } 
        

 
    return 0;
}