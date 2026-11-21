#include<stdio.h>
int main()
{
    int n;
     
    scanf("%d",&n);
    int arr [n];
    
    for (int i = 0;i < n;i++){

       scanf("%d",&arr[i]);
    
    }
     int i = 0;
    while(i < n){
        if(arr[i] <= 10){
         printf("A[%d] = %d\n", i , arr[i]);
        } 
        
    i++;
} 
    
    return 0;
}