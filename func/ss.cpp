#include "sortic.h"
void sa(vector <int>& a) {
	if (a.size() >= 2) {
		int tmp = a[1];
		a[1] = a[0];
		a[0] = tmp;
	}
}


void sb(vector <int>& b) {
	if (b.size() >= 2) {
		int tmp = b[1];
		b[1] = b[0];
		b[0] = tmp;
	}
}


void ss(vector <int>& a, vector <int>& b) {
	sa(a);
	sb(b);
}
