#include <bits/stdc++.h>
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
        vector<int> a(n);

        for(int i = 0; i <n; i++) cin >> a[i];

        unordered_map<int,int> freq;

        for(int x : a) 
        {
            freq[x]++;
        }

        int maxfreq = 0;

        for(auto &p : freq){

            maxfreq = max(maxfreq, p.second);
        }

       
        if(maxfreq == n){

            cout << 1 << endl;
        } 

        else {
            cout << (n - maxfreq + 1) << endl;
        }
    }
    return 0;
}