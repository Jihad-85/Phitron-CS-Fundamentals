#include<bits/stdc++.h>
using namespace std;

struct info{
    string nm;
    string ip;
};

int main() 
{
    
 int n,m;
 cin >> n >> m;
 
 vector<info> server(n);
 vector<info> comand(m);

 
  for(int i= 0;i < n;i++){
     
    cin >> server[i].nm >> server[i].ip ;
    }
    
  for(int i= 0;i < m;i++){

     cin >> comand[i].nm >> comand[i].ip ;
     (comand[i].ip).pop_back();
    }
  

    for(int i= 0;i < m;i++){
       for(int j= 0;j < n;j++){
          if(server[j].ip == comand[i].ip){
            cout << comand[i].nm << " " << comand[i].ip << ";" << " " << '#' << server[j].nm << endl;
          }
       }
    }
    
  
  

    return 0;
}