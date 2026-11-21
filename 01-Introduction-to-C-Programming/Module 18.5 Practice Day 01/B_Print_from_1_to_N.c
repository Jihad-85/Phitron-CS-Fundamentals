#include<stdio.h>

void hello(int a,int i){
      
    if(i == a+1){
        return ;
    }
    printf("%d\n",i);
    hello(a,i+1);
    
}

int main()
{
     int a,i = 1;
    scanf("%d",&a);
    hello(a,i);
    return 0;
}


