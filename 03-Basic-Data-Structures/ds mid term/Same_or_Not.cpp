#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;


    stack<int> s;

    queue<int> q;


    for (int i = 1; i < n; i++) 
    {
        int x; cin >> x;
        s.push(x);
    }



    for (int i = 0; i < m; i++)
     {
        int x; cin >> x;
        q.push(x);
     }



    if (n != m) {
        cout << "NO" << endl;
        return 0;
     }

  bool sam = true;


        while (!s.empty()) {
        if (s.top() != q.front()) {
            sam = false;
            break;
        }

        s.pop();
        q.pop();

      }

     if (sam) cout << "YES" << endl;

     else cout << "NO" << endl;

    return 0;
}