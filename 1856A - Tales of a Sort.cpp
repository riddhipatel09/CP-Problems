#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            ans = max(ans, a[i]);
        }
    }
    
    cout << ans << endl;
}

int main() {
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
