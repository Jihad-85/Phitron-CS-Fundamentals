#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    if (cin >> n) {
        vector<long long> d(n);
        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }

     int left = 0;
     int right = n - 1;

      long long sum1 = d[left];
     long long sum3 = d[right];
     long long max_sum = 0;  

        while (left < right) {
            if (sum1 == sum3) {
                
           max_sum = sum1;
                
          left++;
          right--;
          if (left < right) {
             sum1 += d[left];
             sum3 += d[right];
                }
            } 
       else if (sum1 < sum3) {
          left++;
        if (left < right) {
            sum1 += d[left];
           }
         } 
       else {

        right--;
       if (left < right) {
        sum3 += d[right];
                }
            }
        }

        cout << max_sum << "\n";
    }

    return 0;
}