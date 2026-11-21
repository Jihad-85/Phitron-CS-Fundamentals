#include<bits\stdc++.h>
using namespace std;
int main(){

  string s = "jihadul islam jihad.helllo world";
  cout << s.capacity() << endl;
  cout << s.max_size() << endl;
  s.resize(100);
  cout << s.size() << endl;

  if(s.empty() == true){
     cout << "empty" << endl;
  }
  else{
    cout << "Not empty" << endl; 
  }


  


return 0;
}