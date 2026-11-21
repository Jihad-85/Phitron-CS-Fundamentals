#include <iostream>
#include <string>
// Use <iostream> and <string> instead of #include<bits/stdc++.h> 
// which is non-standard and should be avoided.

using namespace std;

class Student {
public:
    int ids;
    string name;
    char section;
    int marks;
};

int main() {
    // Set up for faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    // Read the number of times to process the 3-student comparison
    cin >> n;

    // Loop N times, processing three students in each loop
    for (int i = 1; i <= n; i++) {
        Student sakib;
        Student rakib;
        Student akib;
        
        // Read data for the three students
        cin >> sakib.ids >> sakib.name >> sakib.section >> sakib.marks;
        cin >> rakib.ids >> rakib.name >> rakib.section >> rakib.marks;
        cin >> akib.ids >> akib.name >> akib.section >> akib.marks;

        // Use if-else if structure to handle comparisons and ties
        
        // Check if Sakib has the highest marks (using >= to prefer Sakib in a tie)
        if (sakib.marks >= rakib.marks && sakib.marks >= akib.marks) {
            cout << sakib.ids << " " << sakib.name << " " << sakib.section << " " << sakib.marks << endl;
        } 
        // Else, check if Rakib has the highest marks (using >= to prefer Rakib over Akib in a tie)
        else if (rakib.marks >= akib.marks) {
            cout << rakib.ids << " " << rakib.name << " " << rakib.section << " " << rakib.marks << endl;
        } 
        // Else, Akib must have the highest marks
        else {
            cout << akib.ids << " " << akib.name << " " << akib.section << " " << akib.marks << endl;
        }
    }

    return 0;
}