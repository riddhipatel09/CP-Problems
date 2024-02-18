#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(auto &i: v) cin >> i;
    sort(v.begin(),v.end());
    int ans=0;
    for(int i = 0; i <n-1; i++){
        ans+=(v[i+1]-v[i]);
    }
    cout << ans <<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
       
    }   
    return 0;

}
