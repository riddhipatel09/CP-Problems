#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    
    bool found = false; // Use a flag to track if a match is found

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s1[0] || s[i] == s1[1] ||
            s[i] == s2[0] || s[i] == s2[1] ||
            s[i] == s3[0] || s[i] == s3[1] ||
            s[i] == s4[0] || s[i] == s4[1] ||
            s[i] == s5[0] || s[i] == s5[1]) {
            found = true;            // Set the flag to true if a match is found
            break;                 // Exit the loop early if a match is found
        }
    }

    if (found) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
