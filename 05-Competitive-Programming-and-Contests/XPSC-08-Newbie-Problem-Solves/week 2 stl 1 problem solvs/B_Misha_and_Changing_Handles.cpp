#include <bits/stdc++.h>
using namespace std;

int main() {
     

    int q;
    cin >> q;

   
    unordered_map<string, string> currentToOriginal;

    for (int i = 0; i < q; i++) {


        string oldHandle, newHandle;

        cin >> oldHandle >> newHandle;

        string original;
       
        if (currentToOriginal.count(oldHandle)) {
            original = currentToOriginal[oldHandle];
            currentToOriginal.erase(oldHandle);  

        } 
        else {
          
            original = oldHandle;
        }
      

        currentToOriginal[newHandle] = original;
    }



    cout << currentToOriginal.size() << "\n";

    for (auto &entry : currentToOriginal) {
        
        cout << entry.second << " " << entry.first << "\n";
    }

    return 0;
}
