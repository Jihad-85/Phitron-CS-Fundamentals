#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
    int n;
    cin >> n;
    
    long long int a[n];

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    sort(a, a+n , greater<int>());

    long long totalbal = 0;

    long long lasttake = a[0] + 1;  

    for (int i = 0; i< n; i++) {
       
        long long curtake = min(a[i], lasttake - 1);

        if (curtake < 0) curtake = 0;

      totalbal += curtake;
        lasttake = curtake; 
        
    
   if (lasttake == 0) break;
    
    }

       cout << totalbal << endl;

    return 0;
}