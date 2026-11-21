#include<stdio.h>
int main()
{
    int x = 104;
    printf("%d\n",x);
    printf("%p\n",&x);

    int * ptr;
    ptr = &x;
    *ptr = 200;
    printf("%d\n",x);
    printf("%p\n",ptr);
    printf("%p",&ptr);
    return 0;
}