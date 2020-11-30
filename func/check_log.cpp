#include "sortic.h"
void check_log(vector <int>& a, vector <int>& b) {
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
		fileWrite(str, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\check_sortic\\log.txt");
		str = "";
	}
}