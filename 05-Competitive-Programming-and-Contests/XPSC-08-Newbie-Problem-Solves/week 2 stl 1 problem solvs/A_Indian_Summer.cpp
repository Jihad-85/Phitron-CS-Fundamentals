#include<bits/stdc++.h>
using namespace std;

class tree{

    public:
        string species ;
        string colour;
};


int main() 
{
    int n;
    cin >> n;
    

    tree t[n];

    for(int i = 0;i < n; i++){

      cin >> t[i].species >> t[i].colour ;
  
    }

    int cnt = 0;
    for(int i = 0;i < n; i++){
        bool flag = false;

        for(int j = 0;j < i; j++){

        if((t[i].species == t[j].species) && (t[i].colour == t[j].colour)){
            
              flag = true;
               break;
           
        } 
        
       }
        if(flag == false){
            cnt++;
        }
  
    }

    cout << cnt << endl;

    return 0;
}