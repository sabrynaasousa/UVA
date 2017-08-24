#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, x, y, z;

  cin >> t;
  while(t--){
    cin >> x >> y >> z;
    double hours = x - ((x + y)/ 3.0);
    double k = (x + y)/ 3.0;
    double t = hours/k * z;
    printf("%.0f\n", t);
  }    
  return 0;
}
