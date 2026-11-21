 #include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> palindromes;

int freq[32768];

bool is_palindrome(int n) {
    int temp = n;
    int rev = 0;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

void precompute() {
    for (int i = 0; i < 32768; i++) {
        if (is_palindrome(i)) {
            palindromes.push_back(i);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long valid_pairs = 0;


    for (int i = 0; i < n; i++) {
        for (int p : palindromes) {
            int needed = a[i] ^ p;
            valid_pairs += freq[needed];
        }
        freq[a[i]]++;
    }

    valid_pairs += n;


    for (int i = 0; i < n; i++) {
        freq[a[i]]--;
    }

    cout << valid_pairs << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}