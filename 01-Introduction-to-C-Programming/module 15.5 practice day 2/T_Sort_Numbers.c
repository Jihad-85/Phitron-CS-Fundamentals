#include<stdio.h>

void min(int a[],int n){
  
     for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(a[i] > a[j]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;  
              
      }   
    }
  }
  
    for(int i = 0;i < n;i++){
      printf("%d\n",a[i]);
    }  
}

 


int main()
{
    int n =3;
    int a[n];
    
     
    for(int i = 0;i < n;i++){
      scanf("%d",&a[i]);
    }

    int b[n];
    for (int i = 0; i < n; i++) {
    b[i] = a[i];  
    }

    min(a,n);
    printf("\n");

    for(int i = 0;i < n;i++){
       printf("%d\n",b[i]);
    }
   
    
    
    return 0;
}