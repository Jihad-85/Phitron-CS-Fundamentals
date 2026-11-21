#include<bits\stdc++.h>
using namespace std;
int main() 
{
    
   int n;
   cin >> n;
   int a[n];

   for(int i = 0;i < n;i++){
    
     cin >> a[i];

   }
   
    long long int tsum = 0; 

   for(int i = 0;i < n;i++){
     
    cin >> a[i];
    tsum += a[i];
   }

    
   long long int lsum = 0;

   int flag = 0;

  for (int i =0; i <n; i++) {

        lsum += a[i];

   

   if (lsum == (tsum - lsum + a[i])) {
            cout << lsum << " " << i+1 << endl;
            flag = 1;
            break;
  }
}

   if( flag == 0){
    cout << "UNSTABLE" << endl;
  }


    return 0;
}