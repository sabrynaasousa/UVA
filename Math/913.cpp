#include<bits/stdc++.h>

using namespace std;

int main(){
  unsigned long long n, line, lastOdd;

  while(cin >> n){
    line = n/2;
    lastOdd = 2*(line + 1)*(line + 1) - 1;
    cout << 3*lastOdd - 6 << endl;
  }
    
  return 0;
}
