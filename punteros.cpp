#include <iostream>

using namespace std;

int main()
{
	int givenInt;
	float givenFloat;
	double givenDouble ;
	string givenString;
	char givenChar;

	cout << "Numero entero: ";
	cin >> givenInt;
	cout << "Numero flotante: ";
	cin >> givenFloat;
	cout << "Numero doble: ";
	cin >> givenDouble;
	cout << "Caracter: ";
	cin >> givenChar;
	cout << "Cadena: ";
	cin.ignore();
	getline(cin, givenString);


	cout << "Int: " << givenInt << ", addres: " << &givenInt << endl;
	cout << "Int: " << givenFloat << ", addres: " << &givenFloat << endl;
	cout << "Int: " << givenDouble << ", addres: " << &givenDouble << endl;
	cout << "Int: " << givenString << ", addres: " << &givenString << endl;
	cout << "Int: " << givenChar << ", addres: " << (void *)&givenChar << endl;

	return 0;
}