#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int coustomer = 0;
        int total_sell = 0;

        for (int i = x; i <= n; i++)
        {
            total_sell += i;
            coustomer++;
        }
        int total_cost = (x * coustomer);
        int profit = (total_sell - total_cost);

        cout << profit << endl;
    }

    return 0;
}