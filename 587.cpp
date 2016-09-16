#include <bits/stdc++.h>

#define PI4 sqrt(2)/2.0

using namespace std;

vector <string> comandos;

map <char,int> n;
map <string,int> d;

using ii = pair<double,double>;

ii us[] {ii(0,1),ii(PI4,PI4),ii(1,0),ii(PI4,-PI4),ii(0,-1),ii(-PI4,-PI4),ii(-1,0),ii(-PI4,PI4)};

int caso = 0;

void direcao (){

  n['1'] = 1;
  n['2'] = 1;
  n['3'] = 1;
  n['4'] = 1;
  n['5'] = 1;
  n['6'] = 1;
  n['7'] = 1;
  n['8'] = 1;
  n['9'] = 1;
  n['0'] = 1;

  d["N"] = 0;
  d["NE"] = 1;
  d["E"] = 2;
  d["SE"] = 3;
  d["S"] = 4;
  d["SW"] = 5;
  d["W"] = 6;
  d["NW"] = 7;
  
  string vezes;
  string mov;
  ii ponto (0.0, 0.0);
  
  caso++;
      
  for ( int i = 0; i < comandos.size(); i++ ){
    vezes = "";
    mov = "";
    for ( int j = 0; j < comandos[i].size(); j++ ){
      if ( n[comandos[i][j]] ){
        vezes += comandos[i][j];
      }
      else{
        mov += comandos[i][j];
      }
    }
    
    int n = atoi(vezes.c_str()); 
    ponto.first = ponto.first + ( n * us[d[mov]].first );
    ponto.second = ponto.second + ( n * us[d[mov]].second ); 
    
  }
  
  printf("Map #%d\n",caso);
  printf("The treasure is located at (%.3lf,%.3lf).\n",ponto.first,ponto.second);
  printf("The distance to the treasure is %.3lf.\n",sqrt((ponto.first * ponto.first) + (ponto.second * ponto.second)));
  printf("\n");


} 

int main(){
  string coordenadas;

  while ( cin >> coordenadas && coordenadas != "END" ){
    string dir; 
    for ( int i = 0; i < coordenadas.size(); i++ ){
      if ( coordenadas[i] == ',' ) {
        comandos.push_back(dir);
        dir = "";
      }
      else if ( coordenadas[i] == '.' ) {
        comandos.push_back(dir);
        dir = ""; 
        direcao();    
        comandos.clear();
      }
      else{
        dir += coordenadas[i];
      }
   }    
  
 }  
  return 0;
}
