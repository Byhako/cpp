
using namespace std;

class Game{
  string tablero[4][4];
  
public:
  Game();
  void setmarkX(int posicion);
  void setmarkO(int posicion);
  string four();
  void print();
};

Game::Game(){
  int ban = 1;
  
  
  for(int i=0 ; i<4 ; i++){
    for(int j=0 ; j<4 ; j++){
      ostringstream cont;
      cont << ban;
      if(ban<10){tablero[i][j] = '0'+ cont.str();}
      else{tablero[i][j] = cont.str();}
      ++ban;
    }
  }
}
void Game::setmarkX(int posicion){
  int ban = 1;
  for(int i=0 ; i<4 ; i++){
    for(int j=0 ; j<4 ; j++){
      if(posicion==ban){
        tablero[i][j] = " X";
      }
      ++ban;
    }
  }
}
void Game::setmarkO(int posicion){
  int ban = 1;
  for(int i=0 ; i<4 ; i++){
    for(int j=0 ; j<4 ; j++){
      if(posicion==ban){
        tablero[i][j] = " O";
      }
      ++ban;
    }
  }
}
string Game::four(){
  string win = "n";
  int conx;
  int cono;
  //verificamos filas
  for(int i=0 ; i<4 ; i++){
    conx = 0;
    cono = 0;
    for(int j=0 ; j<4 ; j++){
      if(tablero[i][j]==" X"){++conx;}
      if(tablero[i][j]==" O"){++cono;}
    }
    if(conx==4){
      win = "x";
      break;
    }
    if(cono==4){
      win = "o";
      break;
    }
  }

  //verificamos columnas
  if(win=="n"){
    for(int i=0 ; i<4 ; i++){
      conx = 0;
      cono = 0;
      for(int j=0 ; j<4 ; j++){
        if(tablero[j][i]==" X"){++conx;}
        if(tablero[j][i]==" O"){++cono;}
      }
      if(conx==4){
        win = "x";
        break;
      }
      if(cono==4){
        win = "o";
        break;
      }
    }
  }

  //verificamos diagonales
  if(win=="n"){
    if(tablero[0][0]==tablero[1][1] && tablero[1][1]==tablero[2][2] && tablero[2][2]==tablero[3][3] && tablero[3][3]==" X")
    {win = "x";}
  
    if(tablero[0][0]==tablero[1][1] && tablero[1][1]==tablero[2][2] && tablero[2][2]==tablero[3][3] && tablero[3][3]==" O")
    {win = "o";}
  
    if(tablero[0][3]==tablero[1][2] && tablero[1][2]==tablero[2][1] && tablero[2][1]==tablero[3][0] && tablero[3][0]==" X")
    {win = "x";}
  
    if(tablero[0][3]==tablero[1][2] && tablero[1][2]==tablero[2][1] && tablero[2][1]==tablero[3][0] && tablero[3][0]==" O")
    {win = "o";}
  }

  return win;

}
void Game::print(){
  cout<<endl;
  for(int i=0 ; i<4 ; i++){
    for(int j=0 ; j<4 ; j++){
      cout<<tablero[i][j]<< " ";
    }
  cout<<endl;
  }
  cout<<endl;

}