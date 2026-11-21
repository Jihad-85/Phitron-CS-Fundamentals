#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
   int n;
   int k;

    cin >> n >> k;

    int brib =(n*60)+k;
    
    int actual = n*100;

     int lescost =  min(actual,brib);
       cout << lescost << endl;

    return 0;
}