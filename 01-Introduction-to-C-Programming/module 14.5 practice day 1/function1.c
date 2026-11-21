#include<stdio.h>

int char_to_ascii(char a){

    int b = a;

    return b;



}
int main()
{
    char a;
    scanf("%c",&a);
    int val = char_to_ascii(a);
    printf("%d",val);
    return 0;
}