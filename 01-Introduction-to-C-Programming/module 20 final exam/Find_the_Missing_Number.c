#include<stdio.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    long long int m;
    int a,b,c;
    for(int i =1;i<=n;i++){
    scanf("%lld %d %d %d",&m,&a,&b,&c);
    
    long long int valu =  (a*b*c);
    if(m == 0){
      printf("0\n");
    }
    else if(m%valu == 0){

      long long int mvalu = m/valu;

      printf("%lld\n",mvalu);
    }
      
    else{
     printf("-1\n");

    }
  }

    return 0;
}