#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x = 0;
	int y = 0;

	cout << "Primero suma, luego asigna.\n";
	cout << "x = " << x << ", y = " << y << "\n";

	y = ++x;
	cout << "y = ++x, entonces:\n";
	cout << "x = " << x << ", y = " << y << "\n\n";

	cout << "Primero asigna, luego suma.\n";
	x = y = 0;
	cout << "x = " << x << ", y = " << y << "\n";

	y = x++;
	cout << "y = x++, entonces:\n";
	cout << "x = " << x << ", y = " << y << "\n\n";

	//OPERADOR CONDICIONAL
	int a = 1;
	int b = 4;
	int c;

	c = (a>b) ? a : b;
	cout << "El numero mayor es: " << c << "\n\n";

	//OPERADOR COMA (,)
	a = (b=1, b+2);  //a = 3

	cout << "El valor de pi es: " << M_PI << "\n\n";

	return 0;
}