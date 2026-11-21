 #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[3] = {10, 11, 12};
        bool count = false;

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n - i; j++)
            {
                int l = n - i - j;
                int total = i * a[0] + j * a[1] + l * a[2];
                if (total == k)
                {
                    count = true;
                    break;
                }
            }
        }
        if (count)
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