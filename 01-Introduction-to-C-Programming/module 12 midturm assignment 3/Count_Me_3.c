#include<stdio.h>
#include<string.h>
int main()
{
    

    int n;
    scanf("%d",&n);

    for(int i = 0; i < n;i++){

    int smal = 0;
    int capl = 0;
    int dig = 0;
    char s[10001];

    scanf("%s",s);

    int lent = strlen(s);
    
    for(int i = 0; i < lent;i++){

        if(s[i] >= 'a' && s[i] <= 'z'){

            smal++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){

            capl++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){

            dig++;
        }

    }

    printf("%d %d %d\n",capl,smal,dig);
    }


    return 0;
}