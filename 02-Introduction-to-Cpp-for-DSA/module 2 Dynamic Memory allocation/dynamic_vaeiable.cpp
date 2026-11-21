#include<bits/stdc++.h>
using namespace std;
int*x;
void fun(){

   
   int *x = new int;
   *x = 2999;
    
   cout << *x << endl;
   return ;

}
int main(){
  fun();
  cout << "main ->" << *x << endl;
       
return 0;
}