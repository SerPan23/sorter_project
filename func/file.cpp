#include "sortic.h"
void fileWrite(int value, string path) {
	ofstream file;
	try {
		file.open(path, ofstream::app);
	}
	catch (string a) {
		std::cerr << a << endl;
	}
	
	if (file.is_open()) {
		file << value << endl;
	}
	else {
		cout << "Error";
	}
	file.close();
}

void fileClear(string path) {
	ofstream file;
	file.open(path);
	if (file.is_open()) {
		file << "";
	}
	else {
		cout << "Error happened clearing";
	}
}
	