#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c;
    
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i = 0;i < r;i++){

     for(int j = 0;j < c;j++){

       scanf("%d",&a[i][j]);

      }
    }
    
   
 
 bool is_dia = true;
 if(r == c)
  {
   for(int i = 0;i < r;i++)
   {
     for(int j = 0;j < c;j++)
      {
        if(i+j == r-1)
        {
         
        }
        else
        {
             if(a[i][j] != 0)    
            {
              is_dia = false;
              
            }

        }

        }
        
      }
      if(is_dia == true)
      {
        printf("This is a secendery diagonal matrix");
      }
      else
      {
        printf("This is Not secendery diagonal matrix");
      }
   }
     
  
  else
  {
        printf("this is Not diagonal mateix");
  } 
    


    return 0;
}