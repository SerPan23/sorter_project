#include "../../func/sortic.h"
void fileWrite(int value, string path = "file.txt") {
	ofstream file;
	file.open("file.txt", ofstream::app);

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
	