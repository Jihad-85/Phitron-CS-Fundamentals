#include<stdio.h>

void fun(int *po){

*po = 20;


}

int main()
{
    
   
     int a= 10;
     fun(&a);
     
    printf("%d\n",a);
     
    return 0;
}