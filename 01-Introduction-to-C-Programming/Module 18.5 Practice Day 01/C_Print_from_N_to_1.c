#include<stdio.h>

void hello(int a,int i){
      
    if(i == a+1){
        return ;
    }
    
    hello(a,i+1); 
    
   
    if(i == 1){
       printf("%d",i);
    }
    else{
       printf("%d ",i);
    }
}

int main()
{
     int a,i = 1;
    scanf("%d",&a);
    hello(a,i);
    return 0;
}


