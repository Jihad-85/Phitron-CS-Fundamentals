#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        int valu = a[i];
        count[valu]++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d -> %d\n", i, count[i]);
    }
    return 0;
}