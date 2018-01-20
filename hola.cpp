#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	cout << "Hello world.\n";

	//  FORMAT
	cout << "\n\nThe text without any formating:\n";
	cout << "Ints" << "Floats" << "Doubles" << "\n";
	cout << "\nThe text with setw(15):\n";
	cout << "Ints" << setw(15) << "Floats" << setw(15) << "Doubles" << "\n";
	cout << "\n\nThe text with tabs:\n";
	cout << "Ints\t" << "Floats\t" << "Doubles" << "\n";

	//  SIZEOF
	cout << "Int size = " << sizeof(int) << "\n";
	cout << "short size = " << sizeof(short) << "\n";
	cout << "long size = "  << sizeof(long) << "\n";
	cout << "char size = " << sizeof(char) << "\n";
	cout << "float size = " << sizeof(float) << "\n";
	cout << "double size = " << sizeof(double) << "\n";
	cout << "bool size = " << sizeof(bool) << "\n";

	
	return 0;
	/*cout << x << endl;  es equivalente a:

	  cout << x << '\n';
	  cout.flush();
	*/
}
