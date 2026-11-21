#include<bits/stdc++.h>
using namespace std;
int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    
   int t;
   cin >> t;

   while(t--){

   int n;
   cin >> n;
   
    string a,b;

    cin >> a >> b;

    vector<int> posa, posb;

    for(int i = 0; i < n; i++){
        if(a[i] == '1'){
            posa.push_back(i);
        }
        if(b[i] == '1'){
            posb.push_back(i);
        }
    }

    if(posa.size() != posb.size()){
        cout << "-1" << endl;
        continue;
    }
 
    int ope = 0;
    for(int i = 0;i < posa.size(); i++){

        if(posa[i] != posb[i]) {
            ope ++;
        }
    }

   cout << ope << endl;

}
    return 0;
}