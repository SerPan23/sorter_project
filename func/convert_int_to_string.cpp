#include "sortic.h"
string convert_int_to_string(int num) {
	string tmp;
	string otv;
	while (num) {
		tmp += num % 10 +48;
		num /= 10;
	}
	for (int i = 0; i < tmp.size(); i++) {
		otv += tmp[tmp.size() - 1 - i];
	}
	return otv;
}