#include<stdio.h>
int main()
{
    int m1,m2,d,lesday = 0;
    int n;
    scanf("%d",&n);

   for(int i = 0;i < n;i++){

    scanf("%d %d %d",&m1,&m2,&d);

    int res = (m1*d)/(m2+m1);

     lesday = d - res;

    printf("%d\n",lesday);
   }
    return 0;
}