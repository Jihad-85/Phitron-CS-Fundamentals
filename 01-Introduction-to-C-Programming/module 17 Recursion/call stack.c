#include<stdio.h>

void sello(){
  printf("sello\n");
   

}

void mello(){
  printf("mello\n");
  sello();

}

void gello(){
  printf("gello\n");
  mello();

}

int main()
{
    printf("hello\n");
    gello();
    return 0;
}