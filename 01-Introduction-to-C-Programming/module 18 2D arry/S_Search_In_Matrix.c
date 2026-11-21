#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c,x;
    
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i = 0;i < r;i++){

     for(int j = 0;j < c;j++){

       scanf("%d",&a[i][j]);

      }
    }
    scanf("%d",&x);
   
 
 bool is_dia = true;
  
   for(int i = 0;i < r;i++)
   {
     for(int j = 0;j < c;j++)
      {
        if(a[i][j] == x)
        {
         is_dia = false;
        }

      }
      
   }
     

  if(is_dia != false)
  {
        printf("will take number");
  } 
    else{
         printf("will not take number");
    }


    return 0;
}