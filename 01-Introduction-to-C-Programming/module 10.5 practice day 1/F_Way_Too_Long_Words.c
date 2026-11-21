#include<stdio.h>
#include<string.h>
int main()
{    
    int n;
    int num;
    scanf("%d",&n);
    char arr[101];

    for (int i = 0;i < n; i++){
       scanf("%s",arr);
       num = strlen(arr);
    if (strlen(arr)<= 10){
      printf("%s\n",arr);
       }
    else {
      printf("%c",arr[0]);
      printf("%d",num-2);
      printf("%c\n",arr[num-1]);
   }
       
}


    return 0;
}