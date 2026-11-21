#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        vector<int> a(n);


        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int changeodd = 0;
        int changeeven = 0;

        for(int i=0; i<n; i++){
            int parity = a[i] % 2;  
 
            if(i % 2 == 0){
                if(parity == 1){
            
                }
                 else {
                    changeodd++;
              }
            } 
            
            else {
                if(parity == 0){
    
                } else {
                    changeodd++;
          }
            }

            if(i % 2 == 0){

                if(parity == 0){
                } 

                else {
                    changeeven++;
              }
            } 
            else {

                if(parity == 1){
                } 
                
                else {
                    changeeven++;
                }
            }
        }

        if(changeodd < changeeven){

            cout << changeodd << endl;
        } 
        else {
            cout << changeeven << endl;
        }
    }
    return 0;
}
