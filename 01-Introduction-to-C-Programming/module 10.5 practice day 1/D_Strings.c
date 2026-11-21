#include<stdio.h>
#include<string.h>
int main()
{    
    char a[11];
    char b[11];

   
    scanf("%s",&a);
    scanf("%s",&b);

    int numa = strlen(a);
    int numb = strlen(b);
     
    printf("%d %d\n",numa,numb);

    printf("%s%s\n",a,b);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n",a,b);


    return 0;
}