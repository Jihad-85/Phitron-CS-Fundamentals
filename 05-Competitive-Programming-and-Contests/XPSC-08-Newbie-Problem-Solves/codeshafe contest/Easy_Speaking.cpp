#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   int t;
    cin >> t;

    while(t--){

        int n;
        string s;

        cin >> n >> s;

        int cnt = 0;
        bool hrd = false;

        for(int i = 0; i < n; i++){

            char c = s[i];

            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
                cnt++;

                if(cnt >= 4){
                    hrd = true;
                    break;
                }
            } else {
                cnt = 0;
            }
        }

        if(hrd) {
            cout << "Yes" << endl;
        }
          else {
            cout << "No" << endl;
        }
    }

    return 0;
}
