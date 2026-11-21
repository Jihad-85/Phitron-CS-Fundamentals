#include<stdio.h>
#include<string.h>
int main()
{
    char n[100001];
     
    fgets(n,100001,stdin);
    int siz = strlen(n);
     
    for (int i = 0;i <= siz; i++){
    
        if(n[i] >= 65 && n[i] <= 90){
             
            printf("%c",n[i]+32);
        }
        else if(n[i] >= 97 && n[i] <= 122){
             
            printf("%c",n[i]-32);
        }
       
        else if(n[i] == 44 ){
             
            printf("%c",32);
        }

    }
    
        
    return 0;
}