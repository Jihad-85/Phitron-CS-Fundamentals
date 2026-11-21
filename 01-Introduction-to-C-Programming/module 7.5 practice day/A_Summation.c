#include<stdio.h>
int main()
{
    int n;
    long long sum = 0;
    scanf("%d",&n);
    int arr [n];
    

    for (int i = 0;i < n;i++){

       scanf("%d",&arr[i]);
    sum = sum + arr[i];
    }


    if(sum < 0){
        sum = -sum;
    }
    printf("%lld\n",sum);

    return 0;
}