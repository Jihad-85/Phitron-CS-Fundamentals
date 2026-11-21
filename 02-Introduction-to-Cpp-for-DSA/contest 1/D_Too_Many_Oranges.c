 #include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int min = 10*n;
        int max = 12*n;
        if(k>=min && k<=max)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}