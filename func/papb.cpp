#include "sortic.h"

void pa(vector <int>& a, vector <int>& b) {
	if (b.size() > 0) {
		int tmp = b[0];
		int tmp2 = 0;
		for (int i = 0; i < a.size(); i++) {
			tmp2 = a[i];
			a[i] = tmp;
			tmp = tmp2;
		}
		a.push_back(tmp);
		/*reverse_vector(b);
		b.pop_back();
		reverse_vector(b);*/
		del_first(b);
	}
}


void pb(vector <int>& a, vector <int>& b) {
	if (a.size() > 0) {
		int tmp = a[0];
		int tmp2 = 0;
		for (int i = 0; i < b.size(); i++) {
			tmp2 = b[i];
			b[i] = tmp;
			tmp = tmp2;
		}
		
		b.push_back(tmp);
		/*reverse_vector(a);
		a.pop_back();
		reverse_vector(a);*/
		del_first(a);
	}
}