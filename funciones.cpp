#include <iostream>

void saludo();
float cociente(int a, float b);
void referencia(int &var);
// array
void arrayAsPointer(int *array, int size);
void arrayUnsized(int array[], int size);

using namespace std;
int main(){
  int a = 6;
  float b = 4;
  float d;
  int x = 8;
  int array[3] = {1, 2, 3};

  saludo();

  d = cociente(a, b);
  cout << "Cociente: " << d << endl;

  referencia(x);
  cout << "Variable por referencia: " << x << endl;

  arrayAsPointer(array, 3);
  arrayUnsized(array, 3);


  return 0;
}
///////////////////////////////////////////////////////
void saludo(){
  cout << "Jugando con funciones.\n";
}

float cociente(int a, float b){
  float division = a/b;
  return division;
}

void referencia(int &var){
  ++var;
}
//*****************************************
void arrayAsPointer(int *array, int size){
  for(int i=0 ; i<size ; i++){
    cout << array[i] << " ";
  }
  cout << "\n";
}

void arrayUnsized(int array[], int size){
    for(int i=0 ; i<size ; i++){
    cout << array[i] << " ";
  }
  cout << "\n";
}
