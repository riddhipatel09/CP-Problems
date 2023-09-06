
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string str;
        cin >> str;
        int prev = -1;
        int cnt = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1') {
                if(prev != -1 ) cnt += (i-prev-1);
                   prev = i;
                }
        }
        cout << cnt << endl;
    }
    return 0;
}
