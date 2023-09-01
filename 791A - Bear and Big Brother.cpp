// https://codeforces.com/problemset/problem/791/A


#include <iostream>
using namespace std;
int main()
{
  int a = 0, b = 0;   
  cin >> a >> b;                   // a is smaller or equals to b
  int years=0;
  for(int i = 0; i < a; i++){
    if(a <= b){
      a = 3*a;
      b = 2*b;
      years = years + 1;
    }
    else{
      break;
    }
  }
  cout << years;
  return 0;
}
