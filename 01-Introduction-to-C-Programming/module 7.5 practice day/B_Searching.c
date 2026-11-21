#include<stdio.h>
int main()
{
    int n,a,x;
     
    scanf("%d",&n);
    int arr [n];
    

    for (int i = 0;i < n;i++){

       scanf("%d",&arr[i]);
    
    }
    scanf("%d",&x);
    int i = 0;
    while(i < n){
        if(x == arr[i]){
        a = i;
        break;
        } 
        else {a = -1;
        }
        i++;
}
    printf("%d\n",a);

    return 0;
}