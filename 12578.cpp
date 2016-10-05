#include <iostream>
#include <math.h>

using namespace std;

int main (){

  int t, comprimento;
  double raio, areaCirculo, areaRetangulo, largura;
  const double PI = 2.0 * acos(0.0);
  
  cin >> t;
  
  for ( int i = 0; i < t; i++ ){
    cin >> comprimento;
    raio = (double)comprimento/5;
    largura = comprimento - 2 * raio;
    areaCirculo = PI * pow( raio, 2 );
    areaRetangulo = (comprimento * largura) - areaCirculo;
    
    printf ( "%.2lf %.2lf\n", areaCirculo, areaRetangulo );
  }
  
  return 0;
}
