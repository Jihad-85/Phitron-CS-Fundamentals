#include<bits\stdc++.h>
using namespace std;
int main(){

     vector<int> v = {1,2,3,4,2,6,5};
     vector<int> v2;
    v2 = v;

    v2.pop_back();

    for(int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;
    v.insert(v.begin()+3,200);
    v.erase(v.begin()+2);
    replace(v.begin(),v.end(),2,100);
    
     for(int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    auto it = find(v.begin(),v.end(),5);
    
    if(it == v.end())
    {
        cout << "not found";
    }
    else
    {
        cout << "found";
    }

return 0;
}