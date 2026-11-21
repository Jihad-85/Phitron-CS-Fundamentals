#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){

        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i=0; i<N; i++) cin >> A[i];

        unordered_map<long long, long long> totalOps;

        for(int i=0; i<N; i++){
            long long x = A[i];
            long long ops = 0;
            while(true){
                totalOps[x] += ops;
                if(x == 0) break;
                x /= 2;
                ops++;
            }
        }
 
        long long ans = LLONG_MAX;
        for(auto &p : totalOps){
            long long candidate = p.first;
            long long sumOps = 0;
            bool valid = true;
            for(int i=0; i<N; i++){
                long long x = A[i];
                long long ops = 0;
                bool found = false;
                while(true){
                    if(x == candidate){
                        sumOps += ops;
                        found = true;
                        break;
                    }
                    if(x == 0) break;
                    x /= 2;
                    ops++;
                }
                if(!found){ valid = false; break; }
            }
            if(valid) ans = min(ans, sumOps);
        }

        cout << ans << "\n";
    }
    return 0;
}
