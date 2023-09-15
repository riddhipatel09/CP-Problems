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
        int winner = 0, best_score = 0;
        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (b > best_score && a <= 10)
            {
                winner = i;
                best_score = b;
            }
        }
        cout << winner << '\n';
    }
    return 0;
}
