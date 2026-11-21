#include<stdio.h>
#include<string.h>
int main()
{    
    char st[1001];
    scanf("%s",st);
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
   printf("YES\n");
}
else{
   printf("NO\n");
}


    return 0;
}