#include<stdio.h>

long long fun(long long int n){

  if(n == 1){
    return 0;
  }  
 
  return 1 + fun(n / 2);
}

int main()
{
   long long int n;
  
    scanf("%lld",&n);

    long long result = fun(n);
    
    printf("%lld",result);
   
    return 0;
}