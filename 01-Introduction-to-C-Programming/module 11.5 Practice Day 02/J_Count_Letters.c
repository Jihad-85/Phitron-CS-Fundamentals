#include <stdio.h>
#include <string.h>
int main()
{    
    
    char a[1001];

    scanf("%s", a);

    int count[26] = {0};

    for (int i = 0; a[i] != '\0'; i++)
    {
        int valu = a[i] - 'a';
        count[valu]++;                             
    }
    for (int i = 0; i < 26; i++)
    {
        if(count[i] > 0){
        printf("%c : %d\n", 'a'+i, count[i]);
        }
    }
    return 0;
}