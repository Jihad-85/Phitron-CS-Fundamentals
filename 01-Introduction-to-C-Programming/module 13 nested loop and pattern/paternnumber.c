#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d",&n);
    int a = n;
    int b = 1;
    for(int i = 1;i <=n;i++){

        for(int j = 1;j <= a-1;j++){
            printf(" ");    
        }
         for(int j = 1;j <= b;j++){
            printf("%d ",j);    
        }
        a--;
        b+=1;
        printf("\n");

    }



    return 0;
}