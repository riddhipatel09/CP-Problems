#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T; cin >> T;
 
    while (T--) {
 
        int n; cin >> n;
        vector<int> nums(n);
        int diff = 1e9;
        bool sorted = true;
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            if (i > 0) {
                diff = min(nums[i] - nums[i - 1], diff);
                sorted &= nums[i] >= nums[i - 1];
            }
        }
        
        if (!sorted) {
            cout << 0 << endl;
            continue;
        }
    
        cout << diff/2 + 1 << endl;
    }
    return 0;
}
