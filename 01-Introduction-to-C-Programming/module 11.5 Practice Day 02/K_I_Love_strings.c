#include<stdio.h>
#include<string.h>
int main()
{
    char a[51];
    char b[51];
    
    int n;
    scanf("%d",&n);

    for(int i=0;i < n;i++){
    
    scanf("%s %s", a, b);

    int lena = strlen(a);
    int lenb = strlen(b);
     
 
    if(lena<lenb){

      for(int i=0;i < lena;i++){
      printf("%c%c",a[i],b[i]);
      }
      for(int i=lena;i < lenb;i++){
      printf("%c",b[i]);
      
      }
    }
    else if(lenb<lena){
       for(int i=0;i < lenb;i++){
      printf("%c%c",a[i],b[i]);
      }
      for(int i=lenb;i < lena;i++){
      printf("%c",a[i]);
      }
        
    }
    else{
       for(int i=0;i < lena;i++){
      printf("%c%c",a[i],b[i]);

      }
    }
 
    printf("\n");

  }   
    return 0;
}