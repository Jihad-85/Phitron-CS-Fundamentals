 #include<stdio.h>
 #include<string.h>
 int main()
 {
    int n,sum = 0;
    scanf("%d", &n);
    char a[n];

    scanf("%s",&a);

    for (int i = 0; i < n; i++)
    {
       int valu = a[i]-48;
       sum = sum + valu;
    }

    printf("%d",sum);

    return 0;
 }