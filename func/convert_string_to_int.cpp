#include "sortic.h"
int convert_string_to_int(string str) {
	int t = 0;
	for (int i = 0; i < str.size(); i++) {
		t *= 10;
		t += str[i] - 48;
	}
	return t;
}