#include<stdio.h>

void fun(int a){

    int i = 1;

  while(i <= a){


    printf("%d",i);
    if(i < a){
      printf(" ");
    }
    i++;
    }
 
}

int main()
{
    int a;
    scanf("%d",&a);
    fun(a);
    
    
    return 0;
}