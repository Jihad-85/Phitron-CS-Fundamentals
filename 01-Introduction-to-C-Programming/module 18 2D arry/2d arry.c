#include<stdio.h>
int main()
{
    int a[3][4];

    scanf("%d",&a[0][3]);
    a[0][0] = 1;
    a[0][1] = 2;
    printf("%d ",a[0][3]);
    return 0;
}