#include <bits/stdc++.h>
using namespace std;
int main() {
  
    int t;
    cin >> t;

    while(t--){


        int n, x, k;
        cin >> n >> x >> k;

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
        cin >> a[i];

        }
        
        //map<int , int> freq;
        unordered_map<int,int> freq;


        for(int i = 0; i < n; i++){
            int scr = a[i];
            freq[scr]++;   
        }
 
        vector<int> clstr;


        for(auto it = freq.begin(); it != freq.end(); ++it)
    {
            clstr.push_back(it->second);
        }
 
        sort(clstr.begin(), clstr.end(), greater<int>());

       
        int eligible = 0;

        for(int i = 0; i< min(k,(int)clstr.size()); i++)
        {
            eligible += clstr[i];
        }
 
        cout << min(eligible, x) << endl;
    }






    return 0;
}
