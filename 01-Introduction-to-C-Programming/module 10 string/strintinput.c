#include<stdio.h>
int main()
{
    char a[10];
    fgets(a,14,stdin);
    printf("%s\n",a);
    
    return 0;
}