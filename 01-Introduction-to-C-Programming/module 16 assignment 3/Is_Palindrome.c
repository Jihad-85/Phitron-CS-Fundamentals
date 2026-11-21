#include<stdio.h>
#include<string.h>

int is_palindrome(char st[]){

   int a = 0;
int siz = strlen(st);
   
   int i = 0;
   int j = siz-1;
   int count = 0;
   while(j>i){
      if(st[i] == st[j]){
         count++;
         i++;
         j--;
    }
    else{
      break;
    }
   }
if (count == siz/2){
    a = 1;
}
else{
    a = 0;
}

return a;


}




int main()
{    
    char st[1001];
    scanf("%s",st);
    int c = is_palindrome(st);

    if(c == 1){
       printf("Palindrome");
    }
    else{
       printf("Not Palindrome");
    }
   

    return 0;
}