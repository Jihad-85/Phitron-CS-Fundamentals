#include<stdio.h>
int main()
{
    int n;
     
    scanf("%d",&n);
    int arr [n];
    
    for (int i = 0;i < n;i++){
       scanf("%d",&arr[i]);
    }


    int low = arr[0];
    int a = 0,i = 0;
    while(i < n){    
        if(arr[i] < low ){
          low = arr[i];
          a = i;
        } 
    i++;
    }  
        
    printf("%d %d",low,(a+1));

    return 0;
}