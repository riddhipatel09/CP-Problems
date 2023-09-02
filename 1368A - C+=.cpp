#include <iostream>
 
using namespace std;
int main()
{
  int t;
  cin >> t;
  int a = 0, b = 0, n = 0;
  while (t--)
  {
    cin >> a >> b >> n;
    int cnt = 0;
    while (max(a,b) <= n)
    {
      if (a > b){
        b += a;
      }
      else{
        a += b;
      }
      cnt++;
    }
    cout << cnt << endl;
  }
 
  return 0;
}
