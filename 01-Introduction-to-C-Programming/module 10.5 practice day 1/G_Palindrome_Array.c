#include<stdio.h>
int main()
{    
    int n;
    scanf("%d",&n);
    int arr [n];

    for (int i = 0;i < n; i++){

       scanf("%d",&arr[i]);

    }
 
   int i = 0;
   int j = n-1;
   int count = 0;
   while(j>i){
      if(arr[i] == arr[j]){
         count++;
         i++;
         j--;
    }
    else{
      break;
    }
   }
if (count == n/2){
   printf("YES\n");
}
else{
   printf("NO\n");
}


    return 0;
}