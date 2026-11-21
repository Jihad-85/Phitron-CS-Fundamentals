 #include<stdio.h>
#include <string.h>

int main()
{
    int t;
    
    scanf("%d", &t) ;
    
    while (t--) {
        int a;
         
        scanf("%d", &a);

        char s[a + 1]; 

        for (int i = 0; i < a+1; i++) {
        scanf("%c", &s[i]);
      }
        
        int flagB = 0;  
        int flagG = 0;  
        int total = 0;  
        
         
        int len = strlen(s); 
        
        for (int i = 0; i < len; i++) {
            
            if (s[i] == 'B') {
                flagB++;
            }
            else if (s[i] == 'G') {
                flagG++;
            }
            
             
            if (flagB > 2 * flagG) {
                 
                total = i + 1; 
                break;  
            }
            
        
            total = i + 1; 
        }
        
        printf("%d\n", total);
    }
    
    return 0;
}