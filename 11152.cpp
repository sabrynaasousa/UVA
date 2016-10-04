#include <iostream>
#include <math.h>

using namespace std;

const double PI = 2.0 * acos(0.0);

int main (){

  int a, b, c;
  double circulo, triangulo, circuloInscrito, areaTriangulo, semiPerimetro, raioInscrito, raio;
  
  while (cin >> a >> b >> c){
     
    semiPerimetro = ( a + b + c )/2.0;
    areaTriangulo = sqrt ( semiPerimetro * ( semiPerimetro - a ) * ( semiPerimetro - b )* ( semiPerimetro - c) ); 
    raio = (double)( a * b * c )/( 4 * areaTriangulo );
    raioInscrito = (double)( 2 * areaTriangulo )/( a + b + c);
    circulo = ( PI * pow( raio , 2 ) ) - areaTriangulo;
    circuloInscrito = PI * pow( raioInscrito , 2 );
    triangulo = areaTriangulo - circuloInscrito; 
    
    printf ("%.4lf %.4lf %.4lf\n", circulo, triangulo, circuloInscrito);
  }  
    
  return 0;
}
