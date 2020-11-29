#include "sortic.h"
void command_sort(vector <int>& a, vector <int>& b) {
	string str;
	cin >> str;
	while (str != "*") {
		make_command(a, b, str);
		cin >> str;
	}
}