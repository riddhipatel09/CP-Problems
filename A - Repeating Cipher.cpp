#include <iostream>
#include <string>
 
using namespace std;
int main()
{
    int n;
    cin >> n;
    string t;
    cin >> t;
    string s;
    for (int i = 0; i < n; i++)
    {
        s += t[i];
        i += s.size();
    }
    cout << s;
    return 0;
}
