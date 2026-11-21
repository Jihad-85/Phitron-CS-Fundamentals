#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){

        
        int N, K;
        cin >> N >> K;
        int finalPlayer = 1 + ((N-1)/K)*K;
        cout << finalPlayer << "\n";
    }
    return 0;
}
