#include<stdio.h>
#include<string.h>
int main()
{    
    int a[101],b[101];
   
    scanf("%s %s",a,b);

    int lent = strlen(b);
     
    for (int i = 0;i <= lent; i++){
        a[i] = b[i];
 
   }
    
    printf("%s %s",a,b);



    return 0;
}