#include<bits\stdc++.h>
using namespace std;
int main()
{
    vector<int> v; // type 1
    cout << v.size() << endl;
    
    vector<int>v1(10); // type 2
    cout << v1.size() << endl;

    vector<int>v2(20,-2); //type 3
    for(int i = 0;i < v2.size();i++)
    {
        cout << v2[i] << " ";
    }
    cout << v2.size() << endl;

    vector<int>v3(v2); //type 4
    for(int i = 0;i < v3.size();i++)
    {
        cout << v3[i] << " ";
    }
    cout << v3.size() << endl;

    int a[5] = {1,2,3,4,5};

     vector<int>v4(a,a+5); //type 5
    for(int i = 0;i < v4.size();i++)
    {
        cout << v4[i] << " ";
    } 
    cout << v4.size() << endl;

    vector<int>v5 = {6,7,8,9,10};    //type 6
    for(int i = 0;i < v5.size();i++)
    {
        cout << v5[i] << " ";
    } 
    cout << v5.size() << endl;


return 0;
}