#include<stdio.h>

int main()
{
    int c;
    scanf("%d", &c);
    for (int i = 1; i <= c; i++) {
        
        int a;
        scanf("%d", &a);
       do
        {   
        printf("%d ",a%10);
        a /= 10;
        } while(a != 0 );
        printf("\n");
    }
    return 0;
}