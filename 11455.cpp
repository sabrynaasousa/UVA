#include <iostream>

using namespace std;

int main (){

  int t, l1, l2, l3, l4;
  
  cin >> t;
  
  for ( int i = 0; i < t; i++ ){
  
    cin >> l1 >> l2 >> l3 >> l4;
    
    if ( l1 == l2 && l2 == l3 && l3 == l4 )
      cout << "square" << endl;
    else if ( ( l1 == l3 && l2 == l4 ) || ( l1 == l2 && l3 == l4 ) || ( l1 == l4 && l2 == l3 ) )  
      cout << "rectangle" << endl;
    else if ( l1 < ( l2 + l3 + l4 ) && l2 < ( l1 + l3 + l4 ) && l3 < ( l1 + l2 +l4 ) && l4 < ( l1 + l2 + l3 ) )  
      cout << "quadrangle" << endl;
    else
      cout << "banana" << endl;
  }
  
  return 0;
}
