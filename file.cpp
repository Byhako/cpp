#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

	string line;
	//create an output stream to write to the file
	//append the new lines to the end of the file

	//ofstream
	fstream myfileI ("file1.txt", ios::app);
	if(myfileI.is_open()){
		myfileI << "\nI am adding a line 1.\n";
		myfileI << "I am adding another line.\n";
		myfileI.close();
	}
	else cout << "Unable to open file for writting";

	//create an input stream to read th file

	//ifstream
	fstream file0 ("file1.txt");
	//During the creation of ifstream, the file is opened.
  //So we do not have explicity open the file.
	if(file0.is_open()){
		while( getline(file0, line) ){
			cout << line << "\n";
		}
		file0.close();
	}

	else cout << "unable to open file for reading";

	return 0;
}
