#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        string codeforces = "codeforces";
        int cnt = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != codeforces[i]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}
