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
			str += char(a[i] + 48);
			str += "|";
			str += char(b[i] + 48);
		}
		else if (a.size() > i && b.size() <= i) {
			str += char(a[i]+48);
			str += "|";
			str += " ";
		}
		else if (a.size() <= i && b.size() > i) {
			str += " ";
			str += "|";
			str += char(b[i] + 48);
		}
		else {
			str += char(i + 48);
		}
		fileWrite(str, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\check_sortic\\log.txt");
		str = "";
	}
}