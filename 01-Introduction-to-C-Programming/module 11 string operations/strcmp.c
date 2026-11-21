#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
   
    scanf("%s %s",&a,&b);

   int c = strcmp(a,b);

      if(c == 0){
            printf("Equal");
            
        }
        else if(c <= 0){
            printf("a is small");
       
        }
        else if(c >= 0){
            printf("b is small");
        } 

 
    return 0;
}