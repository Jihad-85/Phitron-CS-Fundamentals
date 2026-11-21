#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;

            map<int, int> freq;
            for (int i = 0; i < n; i++) {
                int a;
                cin >> a;
                freq[a]++;
            }

            int total_sets = 0;
            int last_size = -1;
            int last_freq = 0;

            for (auto const& pair : freq) {
                int current_size = pair.first;    
                int current_freq = pair.second; 

             
                if (current_size != last_size + 1) {
                    total_sets += current_freq;
                } 
          
                else if (current_freq > last_freq) {
                    total_sets += (current_freq - last_freq);
                }

                last_size = current_size;
                last_freq = current_freq;
            }

            cout << total_sets << "\n";
        }
    }
    return 0;
}