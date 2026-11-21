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
    
   
 
 bool is_pdia = true;
 bool is_sdia = true;
 bool is_outdia = true;


 if(r != c) {
    printf("NO"); 
  }
 else
  {
   for(int i = 0;i < r;i++)
   {
     for(int j = 0;j < c;j++)
      {
        if(i == j)
        {
             if(a[i][j] != 1)    
            {
              is_pdia = false;
              
            }
        }
        

        }
        
      }

  for(int i = 0;i < r;i++)
   {
     for(int j = 0;j < c;j++)
      {
        if(i+j == r-1)
        {
             if(a[i][j] != 1)    
            {
              is_sdia = false;
              
            }
        }
        

        }
        
    }



    for(int i = 0;i < r;i++)
   {
     for(int j = 0;j < c;j++)
      {
        if(i != j && i+j != r-1)
        {
             if(a[i][j] != 0)    
            {
              is_outdia = false;
              
            }
        }
        

        }
        
      }
         if(is_pdia == true && is_sdia == true && is_outdia == true  )
      {
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
      

  }
  


    return 0;
}