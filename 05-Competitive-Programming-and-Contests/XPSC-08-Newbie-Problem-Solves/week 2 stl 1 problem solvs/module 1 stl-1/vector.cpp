#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
    // int n;
    // cin >> n;
    // vector<int> v;

    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    //  //cout << v.size() << endl;
    
    //   v.pop_back();
    //  // cout << v.size() << endl;

    //   for(int i = 0; i < v.size(); i++){
    //   cout << v[i] << " ";

    // }
    // cout << endl;

    // //cout << v.front() << endl;
    //  //cout << v.back() << endl;
     
    //  v.clear();
    //  cout << v.empty() << endl;

    //  int n;
    //  cin >> n;
    //  vector<int> v(n,9);
    //  for(int i = 0; i < n; i++){
    //     cout << v[i] << " " ;
    //  } 

    //  int n;
    //  cin >> n;
    //  vector<int> v(n);
    //  v.assign(n, 9);

    //  for(int i = 0; i < n; i++){
    //     cout << v[i] << " " ;
    //  } 

     int n;
     cin >> n;
     vector<int> v;
     
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    //  for(int i = 0; i < n; i++){
    //     cout << v[i] << " " ;
    //  } 

    // cout << endl;

    // auto it = v.begin() ;
    // auto it2 = v.begin() + 1 ;
    // cout << *it2 << endl;

    // for (auto it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }
    
    // cout << endl;

    //  for (auto it = v.rbegin(); it != v.rend(); it++){
    //     cout << *it << " ";
    // }

    reverse(v.begin(), v.end());

    for (auto value : v){
        cout << value << " ";

    }
   cout << endl;
    sort(v.begin(), v.end());

    for (auto value : v){
        cout << value << " ";
    }
    cout << endl;
    
     //sort(v.rbegin(), v.rend());
     
    //  sort(v.begin(), v.end(), greater<int>());  

    // for (auto value : v){
    //     cout << value << " ";
    // }

    cout << endl;


    auto mn = min_element(v.begin(),v.end());

    cout << *mn << endl;


    auto mx = max_element(v.begin(),v.end());

    cout << *mx << endl;

    int maxelement = mx - v.begin();

    cout << maxelement << endl;


    return 0;
}