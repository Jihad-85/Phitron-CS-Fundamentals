#include<stdio.h>

void fun(int x){
x = 20;

printf("fun x address %p\n",&x);

}

int main()
{
    
     int x = 10;
     fun(x);
     printf("main x address %p\n",&x);
    printf("%d\n",x);
     
    return 0;
}