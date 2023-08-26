#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int x=0;
    cin >> n;
    while(n--){
        string stmt;
        cin >> stmt;
        if(stmt[1] == '+'){
            x++;
        }
        else if(stmt[1] == '-'){
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
