#include<stdio.h>

int printarry(int a[],int n,int i){
   if(i == n){
     return a[n-1];
   }
     
   int m = printarry(a,n,i+1);
     if(a[i]>m){
     return m = a[i];
   }
   else{
    return m;
   }
}



int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
   int max = printarry(a,n,0);
   printf("%d",max);
    return 0;
}