#include <iostream>

using namespace std;

int main (){

  long long int t, a, b ,c;
  
  cin >> t;
  
  for ( int i = 1; i <= t; i++ ){
    cin >> a >> b >> c;
    
    printf( "Case %d: ", i);
    
    if ( a < ( b + c ) && b < ( a + c) && c < ( a + b ) ){
      if ( a == b && b == c )
        cout << "Equilateral" << endl;
      else if ( a == b || b == c  || a == c )
        cout << "Isosceles" << endl;  
      else
       cout << "Scalene" << endl; 
    }
    else {
      cout << "Invalid" << endl;
    }   
    
  }
  
  return 0;
}
