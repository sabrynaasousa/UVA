#include <bits/stdc++.h>

using namespace std;

int main (){

  double x, y, z;

  vector <double> ptx;
  vector <double> pty;
  vector <double> ptz;

  while ( cin >> x >> y >> z ){
    if ( x == 0 && y == 0 && z == 0 ){
      break;
    }  

    ptx.push_back(x);
    pty.push_back(y);
    ptz.push_back(z); 
  }
  int cont[15];
  memset( cont , 0 , sizeof cont );

  for ( int i = 0; i < ptx.size(); i++ ){
     double distance = 0, smaller = 99999999999999999;
     for ( int j = 0; j < ptx.size() ; j++ ){
         if ( i == j )
            continue;

         distance = sqrt((ptx[i] - ptx[j])*(ptx[i] - ptx[j]) + (pty[i] - pty[j])*(pty[i ]- pty[j]) + (ptz[i] - ptz[j])*(ptz[i] - ptz[j]));

         if ( distance < smaller ){
            smaller = distance; 
         }
     }  
      
     if ( smaller < 10 )
        cont[(int)smaller] += 1;    
  }  
  for ( int k = 0; k < 10; k++ ){
      printf ("%4d", cont[k]);
  } 
 
  cout << endl;

  return 0;
}

