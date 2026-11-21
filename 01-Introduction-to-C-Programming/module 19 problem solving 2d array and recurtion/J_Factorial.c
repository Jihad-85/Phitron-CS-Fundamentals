#include<stdio.h>

long long int rec(int a)
{
  
  if(a == 1){

    return 1;
  }

  long long int v = rec(a-1);
  
   return a*v;
   
}

int main()
{
    
   int a;
   scanf("%d",&a);
  
   long long int ans = rec(a);
    printf("%lld",ans);

    return 0;
}