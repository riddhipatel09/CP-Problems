#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
        for (int i = 0; i < t; i++)
        {
            vector<string> v(3);
            for (int j = 0; j < 3; j++)
            {
                cin >> v[j];
            }
            string ans = "DRAW";
            for (int j = 0; j < 3; j++)
            {
                if (v[j][0] == v[j][1] && v[j][1] == v[j][2] && v[j][0] != '.')
                {
                    ans = v[j][0];
                }
            }
            for (int j = 0; j < 3; j++)
            {
                if (v[0][j] == v[1][j] && v[1][j] == v[2][j] && v[0][j] != '.')
                {
                    ans = v[0][j];
                }
            }
            if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.')
                ans = v[0][0];
            if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '.')
                ans = v[0][2];
            cout << ans << endl;
        }
    return 0;
}
