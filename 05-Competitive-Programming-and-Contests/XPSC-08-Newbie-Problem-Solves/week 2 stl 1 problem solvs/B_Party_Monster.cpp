#include <bits\stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        char a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        int flag = 0;

        
   
            for (int i = 0; i < n; i++)
           {
              if(a[i] == '(')
              {
                 flag++;
              }
           }

        if(n%2 != 0){
             cout << "NO" << endl;
        }
       
        else if (flag == n/2){
            cout << "YES" << endl;
        }
        else{
             cout << "NO" << endl;
        }
         

         
    }
    return 0;
}