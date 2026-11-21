#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d",&n);
    int a = 6+(n/2);
    int m = a;
    int b = 1;


    for(int i = 1;i <=m;i++){

        for(int j = 1;j <= a-1;j++){
            printf(" ");    
        }
         for(int j = 1;j <= b;j++){
            printf("*");    
        }
        a--;
        b+=2;
        printf("\n");

    }
    
   
     
    for(int i = 1;i <= 5;i++){

        for(int j = 1;j <= 5;j++){
            printf(" ");    
        }
         for(int j = 1;j <= n;j++){
            printf("*");    
        }
        a--;
        
        printf("\n");

    }



    return 0;
}