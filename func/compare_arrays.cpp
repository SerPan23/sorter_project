#include "sortic.h"
bool compare_arrays(vector <int>& a, vector <int>& a_sort) {
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != a_sort[i])
			return false;
	}
	return true;
}