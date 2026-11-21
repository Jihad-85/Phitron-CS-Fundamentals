#include<stdio.h>
int main()
{
    int n,a,x;
     
    scanf("%d",&n);
    int arr [n];
    
    for (int i = 0;i < n;i++){

       scanf("%d",&arr[i]);
    
    }
     int i = 0;
    while(i < n){
        if(arr[i] > 0){
        
        a = 1;
        } 
        else if (arr[i] < 0){
        
        a = 2;
        }
         else if (arr[i] == 0){
         
        a = 0;
        }
        printf("%d ",a);
        i++;
}
    

    return 0;
}