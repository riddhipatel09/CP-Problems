// T.C = O(N)
// S.C = O(N) for storing input number in num variable

#include <iostream>
#include <string>
using namespace std;

int main(){
   string num;
   cin >> num;

   for(int i=0; i < num.length(); i++){
        int digit = num[i] - '0';
        int new_digit = 9-digit;
        if (i == 0 && digit == 9){
            continue;
        }
        if (new_digit < digit){
            num[i] = new_digit + '0';
        }
   }
 
   cout << num << endl;
 
    return 0;
}
