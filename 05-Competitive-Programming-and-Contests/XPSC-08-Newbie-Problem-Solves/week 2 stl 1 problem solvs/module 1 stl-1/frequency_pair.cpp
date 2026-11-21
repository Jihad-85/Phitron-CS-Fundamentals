#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    pair<string, pair<int, string>> p = {"jihad", {20, "A"}};

    cout << p.first << " " << p.second.first << " "<< p.second.second << endl;
   
    pair<string, pair<int, string>> x;

    cin >> x.first >> x.second.first >> x.second.second;

    cout << x.first << " " << x.second.first << " "<< x.second.second << endl;
    return 0;
}