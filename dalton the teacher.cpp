#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == i + 1)
            {
                ans++;
            }
        }
        if (ans % 2 == 0)
        {
            cout << ans / 2 << endl;
        }
        else
        {
            cout << ans / 2 + 1 << endl;
        }
    }
    return 0;
}
