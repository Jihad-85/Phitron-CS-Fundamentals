#include<stdio.h>

void fun(int n){
  
    if(n == 0){
        return;
    }
   fun(n/10);
    int last = n%10;

   printf("%d ",last);


}

int main()
{   
    int t;
    scanf("%d",&t);
    for(int i = 1;i<=t;i++){
    int n;
    scanf("%d", &n);
    if(n == 0){    
    printf("0");
    }
    fun(n);
    printf("\n");
}

return 0;
    }
    