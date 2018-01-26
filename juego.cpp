#include <sstream>
#include <string>
#include <iostream>

#include "juegoClases.hpp"

int main(){
  string userx;
  string usero;
  int valor;
  string win = "n";
  
  cout << "Ingresa nombre el usuario de X:" << endl;
  cin >> userx;
  cout << "Ingresa nombre el usuario de O:" << endl;
  cin >> usero;
  
  Game tic;
  tic.print();
  
  for(int i=0 ; i<16 ; i++){
    if(i%2==0){
      cout << "Turno de "<<userx<<endl;
      cin >> valor;
      tic.setmarkX(valor);
    }
    else{
      cout << "Turno de "<<usero<<endl;
      cin >> valor;
      tic.setmarkO(valor);
    }
    tic.print();
    win = tic.four();
    if(win!="n"){break;}
  }
  
  if(win=="x"){cout << userx << " es el ganador.\n";}
  if(win=="o"){cout << usero << " es el ganador.\n";}
  if(win=="n"){cout << "Empate.\n";}
  
  return 0;
}