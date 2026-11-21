#include<stdio.h>

int min(int a[],int n){
 int m = 0;
     for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(a[i] > a[j]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;  
              
      }   
    }
  }
  m = a[0];
    return m;
}


int max
(int a[],int n){
 int m = 0;
     for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(a[i] < a[j]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;  
              
      }   
    }
  }
  m = a[0];
    return m;
}


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++){
      scanf("%d",&a[i]);
    }
    printf("%d ",min(a,n));
    printf("%d\n",max(a,n));
    
    
    return 0;
}