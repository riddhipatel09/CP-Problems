#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int n = 0, m = 0;
    cin >> n >> m;
    string c1;
    int even_row = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 != 0)
            {
                cout << "#";
            }
            else if (j == m && even_row == 1 || j == 1 && even_row == 2)
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        if (i % 2 == 0)
        {
            even_row = (even_row == 1) ? 2 : 1;
        }
 
        cout << endl;
    }
    return 0;
}
