/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int T = 10;
  int userInput[T];
  int ban = 1;
  int tem = 0;
  int cont = 0;

  cout << "Array directo.\n";
  for(int i = 0; i <T; i++){
    cin >> userInput[i];
    cout << userInput[i] << " ";
  }

  cout << "\n\nArray inverso.\n";
  for(int i=T-1 ; i>-1 ; i--){
    cout << userInput[i] << " ";
  }

  //Ordenamos el array
  for(int i=0 ; i<T ; i++){
    for(int j=0 ; j<T-1-i ; j++){
      if(userInput[j]>userInput[j+1]){
        tem = userInput[j];
        userInput[j] = userInput[j+1];
        userInput[j+1] = tem;
      }
    }
  }

  cout << "\n\nArray ordenado.\n";
  for(int i = 0; i <T; i++){
    cout << userInput[i] << " ";
  }
  cout << endl;
  return 0;
}