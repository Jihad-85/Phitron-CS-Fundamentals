#include<stdio.h>
int main()
{
    int r,c,sc,sr;
    
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(int i = 0;i < r;i++){

     for(int j = 0;j < c;j++){

       scanf("%d",&a[i][j]);

      }
    }
    //  scanf("%d",&sr);

    //  for(int j = 0;j < c;j++){

    //   printf("%d ",a[sr-1][j]);
    //   }

         scanf("%d",&sc);

     for(int j = 0;j < r;j++){

      printf("%d\n",a[j][sc-1]);
      }

        
   

    
    


    return 0;
}