#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, q, r;
        cin >> p >> q >> r;
        int s = q + r;
        if (s < p)
        {
            cout << (s + (s + 1)) << endl;
        }
        else
        {
            cout << (p + (p - 1)) << endl;
        }
    }
    return 0;
}
