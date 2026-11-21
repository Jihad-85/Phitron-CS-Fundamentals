#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int a,b;
   
   cin >> a >> b;
   
   bool c = true;
   
   for (int i=a;i <= b ;i++ ){
       if(i%2 == 0){
           cout << "Yes" << endl;
         c = false;
           break;
       }
       
   }
   if (c == true){
      
           cout << "No" << endl;
       
   }
   
   
}
