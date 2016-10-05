#include <iostream>
#include <math.h>

using namespace std;

int main (){

  double a, b, c, areaTriangulo, semiPerimetro, raioInscrito;
  
  while ( cin >> a >> b >> c ){
      
    if ( a + b + c != 0  ){ 
      semiPerimetro = (double)( a + b + c )/2;
      areaTriangulo = (double) sqrt ( semiPerimetro * ( semiPerimetro - a ) * ( semiPerimetro - b )* ( semiPerimetro - c) ); 
      raioInscrito = (double)( 2 * areaTriangulo )/( a + b + c);
      
      printf ( "The radius of the round table is: %.3lf\n", raioInscrito );
    }  
    else {
      printf ( "The radius of the round table is: 0.000\n");
    }
 }
     
  return 0;
}
