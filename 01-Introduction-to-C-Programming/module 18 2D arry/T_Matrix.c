#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r,c;
   
    scanf("%d",&r);
       c = r;
    int a[r][c];

    for(int i = 0;i < r;i++){

     for(int j = 0;j < c;j++){

       scanf("%d",&a[i][j]);

      }
    }
    
  int p =0;
  int s =0; 
 
  
 if(r == c)
  {
   for(int i = 0;i < r;i++)
   {
     for(int j = 0;j < c;j++)
      {
        if(i==j){
           p = p+a[i][j];
        }
        if(i+j == r-1)
        {
           s = s+a[i][j]; 
        }
         

        }
        
     
   }
}  

  int dif = (p-s);
  if(dif < 0){
    dif = -dif;
    printf("%d",dif);
  }
 else {
 printf("%d",dif);
}
    return 0;
}