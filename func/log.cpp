#include "sortic.h"
void log(vector <int>& a, vector <int>& b, string path) {
	int maxl;
	if (a.size() > b.size())
		maxl = a.size();
	else
		maxl = b.size();
	for (int i = 0; i < maxl; i++) {
		string str;
		if (a.size() > i && b.size() > i) {
			str += convert_int_to_string(a[i]);
			str += "|";
			str += convert_int_to_string(b[i]);
		}
		else if (a.size() > i && b.size() <= i) {
			str += convert_int_to_string(a[i]);
			str += "|";
			str += " ";
		}
		else if (a.size() <= i && b.size() > i) {
			str += " ";
			str += "|";
			str += convert_int_to_string(b[i]);
		}
		fileWrite(str, path);
		str = "";
	}
}