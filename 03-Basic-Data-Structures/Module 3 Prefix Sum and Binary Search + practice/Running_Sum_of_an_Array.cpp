#include<bits\stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n ;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
    }

    vector<int> sum(n+1);
    sum[1] = v[1];
    for(int i=2;i<=n;i++)
    {
        sum[i] = sum[i-1] + v[i];
    }
     for(int i=1;i<=n;i++)
    {
        cout << sum[i] << " ";
    }


    return 0;
}