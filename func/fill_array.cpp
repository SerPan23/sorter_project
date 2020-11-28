#include "sortic.h"
void fill_array(vector <int>& arr) {
	string tmp;
	cin >> tmp;
	int t = convert_string_to_int(tmp);
	while (tmp != "!") {
		arr.push_back(t);
		cin >> tmp;
		t = convert_string_to_int(tmp);
	}	
}