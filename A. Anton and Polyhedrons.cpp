#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;

  long long faces=0;
  string polyname;
  while(n--) {
    cin >> polyname;
    if(polyname=="Tetrahedron")
        faces=faces+4;
    if(polyname=="Cube")
        faces=faces+6;
    if(polyname=="Octahedron")
        faces=faces+8;
    if(polyname=="Dodecahedron")
        faces=faces+12;
    if(polyname=="Icosahedron")
        faces=faces+20;
  }    
    cout<<faces;
    return 0;
  
}
