#include <bits\stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        
        int flag = 0;
    

        for (int i = 0; i < n; i++)
        {   
            int left = 0;
            int right = n - 1;

            while (left = right)
            {

                if (a[left] != a[right])
                {
                    flag = 1;
                    break;
                }
                else
                {
                    left++;
                    right--;
                }
            }

             if (flag == 0)
            {
                break;
            }

             else if (flag == 1)
            {
                a.insert(a.begin() + i, k);
            }
           
            else if (i == n - 1 && flag == 1)
            {
                break;
            }
        }
 
        cout << endl;

        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}