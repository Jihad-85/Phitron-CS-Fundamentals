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
            printf("*");
       
        }
        a--;
        b+=2;

        printf("\n");

    }
    int c = 1;
    int d = b-2;
    for(int i = 1;i <=n;i++){

        for(int j = 1;j <= c-1;j++){
            printf(" ");
       
        }
         for(int j = d;j > 0;j--){
            printf("*");
       
        }
        c++;
        d-=2;

        printf("\n");

    }
     

    return 0;
}