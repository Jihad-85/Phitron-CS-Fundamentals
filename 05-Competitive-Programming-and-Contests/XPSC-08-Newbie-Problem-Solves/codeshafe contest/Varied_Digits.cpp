#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x;
    
    if (cin >> x) {


        if (x / 10 == x % 10) {
            cout << "No\n";
        } 
        else {
            cout << "Yes\n";
        }
    }
    
    return 0;
}