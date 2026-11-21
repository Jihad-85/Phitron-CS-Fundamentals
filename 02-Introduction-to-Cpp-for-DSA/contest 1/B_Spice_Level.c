#include<stdio.h>
int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i =0;i < t;i++){
    int a;
    scanf("%d",&a);
    if(a < 4){
        
        printf("MILD\n");

    }
    if(a >= 4 && a < 7){
        
        printf("MEDIUM\n");

    }
    if(a >= 7){
        
        printf("HOT\n");

    }
    }
    return 0;
}