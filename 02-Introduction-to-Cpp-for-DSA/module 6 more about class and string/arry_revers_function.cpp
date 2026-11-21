#include<bits\stdc++.h>
using namespace std;
int main(){

    int n;
    string s;
    cin >> s;
    cin >> n;
    
   
    int a[n];
    for(int i=0; i<n;i++){
        
        cin >> a[i];
    }
    reverse(a,a+n);

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    reverse(s.begin(),s.end());
    cout << endl << s << endl;


return 0;
}