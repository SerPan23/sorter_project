#include "sortic.h"
void command_sort(vector <int>& a, vector <int>& b) {
	string str;
	cin >> str;
	while (str != "*") {
		if (str == "sa")
			sa(a);
		else if (str == "sb")
			sb(b);
		else if (str == "ss")
			ss(a, b);
		else if (str == "pa")
			pa(a, b);
		else if (str == "pb")
			pb(a, b);
		else if (str == "ra")
			ra(a);
		else if (str == "rb")
			rb(b);
		else if (str == "rr")
			rr(a, b);
		else if (str == "rra")
			rra(a);
		else if (str == "rrb")
			rrb(b);
		else if (str == "rrr")
			rrr(a, b);
		cin >> str;
	}
}