#include<stdio.h>
#include<string.h>
int main()
{    
    char a[101],b[101];
   
    scanf("%s %s",&a,&b);
    
   
    int lent_a = strlen(a);
    int lent_b = strlen(b);


     
    for (int i = 0;i <= lent_b; i++){
        a[i+lent_a] = b[i];
 
   }
    
    printf("%s %s",a,b);

    return 0;
}