#include<stdio.h>
int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i =0;i < t;i++){
    int a, b;
    scanf("%d %d",&a,&b);
    if(b>=a){
        
        printf("YES\n");

    }
    else{
        printf("NO\n");
    }
    }
    return 0;
}