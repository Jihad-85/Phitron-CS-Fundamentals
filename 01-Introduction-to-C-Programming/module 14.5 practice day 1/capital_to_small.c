#include<stdio.h>

char small_to_capital(char a) {

    char b = a + 32;

    return b;

}
int main()
{
    char a;
    scanf("%c",&a);
    char val = small_to_capital(a);
    printf("%c",val);
    return 0;
}