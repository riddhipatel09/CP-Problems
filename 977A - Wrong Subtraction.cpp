// https://codeforces.com/problemset/problem/977/A


#include <iostream>
 
using namespace std;
int main()
{
  int n=0 , k=0;
  int cnt = 0;
  cin >> n >> k;
 
  
  for(int i=0; i<k; i++){
    if(n % 10 == 0){
    n = n/10;
    }
    else{
    n = n-1;
    }
  }
  cout << n << endl;
    return 0;
}
