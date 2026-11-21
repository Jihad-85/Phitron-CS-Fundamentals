#include<bits/stdc++.h>
using namespace std;

int main() 
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
    cin >> t;
    while(t--){


    long long int a, b, x;

    cin >> a >> b >> x;
 
     vector<pair<long long int, long long int>> A, B;
            
          
    long long int curra = a;
    long long int costa = 0;

            A.push_back({curra, costa});

            while (curra > 0) {

                curra /= x;
                costa++;
                A.push_back({curra, costa});
            }
 
           
         long long int currb = b;
        long long int costb = 0;

        B.push_back({currb, costb});

           while (currb > 0) {

        currb /= x;
         costb++;
         B.push_back({currb, costb});

            }

           
     long long int min_ops = 1000000;  
            
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < B.size(); ++j) {

     long long int current_ops = A[i].second + B[j].second + abs(A[i].first - B[j].first);

                if (current_ops < min_ops) 
                 {
                        min_ops = current_ops;
                }
                }
            }

            cout << min_ops << endl;
        }
    
     return 0;
}

