#include <bits/stdc++.h>

using namespace std;

int main(){

  string line;
  
  while( getline( cin, line ), line != "*" ){
  
    char letraTolower =  tolower( line[0] );
    char letraToupper =  toupper( line[0] );
    
    istringstream is( line );
    string word;
    
    int cont = 0, contF = 0;
    
    while( is >> word ){
      cont++;
      if( word[0] == letraTolower || word[0] == letraToupper ){
        contF++;
      }
    }
    
    if( cont == contF )
      cout << "Y" << endl;
    else
      cout << "N" << endl;  
  }
  return 0;
}
