#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

// you'll be given a vector V. you need to check if the vector is in ascending order. if it is then pritn "yes" otherwise print "no"
int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }


    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    bool flag = true;

    for(int i=0; i<n-1; i++) 
    {
        if (v[i] > v[i+1]) {
            flag = false;
            break;
        }
    }

    if (flag == true) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }

    
    return 0;
}