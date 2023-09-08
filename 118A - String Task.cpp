#include <iostream>
#include <string>
#include<algorithm>
 
using namespace std;
int main()
{
    string str;
    cin >> str;
    string outstr="";
    string ch = ".";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'y' || str[i] == 'Y' || str[i] == 'o' || str[i] == 'O' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'u' || str[i] == 'U')
        {
            outstr = outstr;
        }
        else
        {
            outstr += ch + str[i];
        }
    }
    transform(outstr.begin(), outstr.end(), outstr.begin(), ::tolower);
    cout << outstr;
    return 0;
}
