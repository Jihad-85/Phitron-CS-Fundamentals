#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
   int t;
    cin >> t;
    while(t--){


        int a, y;
        cin >> a >> y;

        int total = 0;

        for(int temp = a;temp > y; temp--){

            total += (temp + 9) / 10; 
            
        }

        cout << total << endl;
    }



    return 0;
}