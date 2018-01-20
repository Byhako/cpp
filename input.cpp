//./a.out stdin=open("input.txt", "r")
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	int numero = 0;
	string user;
	string stringLength;
	float inches = 0;
	float yardage = 0;

	cout << "¿Quien eres?\n";
	std::getline(cin, user);
	cout << "Hola " << user << "\n\n";

	//stringstream
	cout << "Numero de pulgadas: ";
	getline(cin, stringLength);
	stringstream(stringLength) >> inches; //converting to numeric variable
	cout << "Tu dijiste " << inches << "\n";
	yardage = inches/36;
	cout << "Tenemos " << yardage << " yadas.\n\n";

	cout << "Ingresa un numero:\n";
	cin >> numero;
	cout << "Mi numero es: " << numero << "\n";

	cout << "Ingresa otro nombre.\n";
	cin >> user;
	cout << user << '\n';

	return 0;
}