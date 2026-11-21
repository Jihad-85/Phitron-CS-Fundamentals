#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    int t;

    cin >> t;

    while(t--){
 
         int n;
         cin >> n;
            
        long long totalsum = 0;

        long long totalor = 0;
            
         for (int i = 0; i < n; ++i) {

                long long x;
                cin >> x;
                totalsum += x;
                totalor |= x;
            }
 
            if (totalsum == totalor) {

                cout << "Yes" << endl;
            } 
            else {
                cout << "No" << endl;
            }
        }
    
    return 0;
}