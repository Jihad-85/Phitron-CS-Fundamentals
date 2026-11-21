#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    

    int t;
    cin >> t;
    while(t--){


    int n, k;
    cin >> n >> k;

    vector<int> strent(n, 0);  

    int card = k;  
        
    bool forord = true;

     while(card > 0){

            if(forord){
                
            for(int i = 0;i < n &&card > 0; i++){

                 strent[i] += card;

                card--;
                }
            }
            
            else {
                for(int i = n-1; i >= 0&& card > 0; i--){

                 strent[i] += card;
                 card--;
                }
            }
            forord = !forord; 
        }
            
        int m = *max_element(strent.begin(), strent.end());
        
        cout <<  m << endl;
    }
    return 0;
}
