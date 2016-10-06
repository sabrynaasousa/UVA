#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int main (){

  const double PI = 2.0 * acos(0.0);
  int n, t, t1, t2;
  double area, raioMaior, raioMenor, raio, areaMaior, areaMenor, areaT1, areaT2;
  string linha;
  
  cin >> n;
  getchar();
  
  for ( int i = 0; i < n; i++ ){
    getline( cin,linha );
    stringstream ss(linha);
    int cont = 0;
    while ( ss >> t ){
      if ( cont == 0 )
        t1 = t;
      else
        t2 = t; 
      
        cont++;
    }
    
    if ( cont == 1 ){
      raioMaior = (double) t1/2;
      raioMenor = (double) t1/4;
      areaMaior = PI * pow (raioMaior,2);
      areaMenor = PI * pow (raioMenor,2);
      area = areaMaior - 2 * areaMenor;
    }
    else{
      areaT1 = PI * pow (t1,2);
      areaT2 = PI * pow (t2,2);
      areaMenor = areaT1 + areaT2;
      raio = t1+t2;
      areaMaior = PI * pow (raio, 2) ;
      area = areaMaior - areaMenor;
    }
    
    printf ("%.4lf\n", area);
  }
  
  return 0;
}
