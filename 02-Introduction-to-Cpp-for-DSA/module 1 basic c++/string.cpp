#include<iostream>
using namespace std;
int main(){

   char s[100];

//    cin >> s;
    int x;
    cin >> x;
   cin.ignore ();
   cin.getline(s,100);
   cout << x << endl << s << endl;



  return 0;
}