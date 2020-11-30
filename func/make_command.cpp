#include "sortic.h"
void make_command(vector <int>& a, vector <int>& b, string command) {
	fileWrite("******" + command, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\check_sortic\\log.txt");
	if (command == "sa")
		sa(a);
	else if (command == "sb")
		sb(b);
	else if (command == "ss")
		ss(a, b);
	else if (command == "pa")
		pa(a, b);
	else if (command == "pb")
		pb(a, b);
	else if (command == "ra")
		ra(a);
	else if (command == "rb")
		rb(b);
	else if (command == "rr")
		rr(a, b);
	else if (command == "rra")
		rra(a);
	else if (command == "rrb")
		rrb(b);
	else if (command == "rrr")
		rrr(a, b);
	check_log(a, b);
}