#include "sortic.h"
void rra(vector<int>& a)
{
	if (a.size() != 0)
		ft_super_shift_list(a, 1);
}

void rrb(vector<int>& b)
{
	if (b.size() != 0)
		ft_super_shift_list(b, 1);
}

void rrr(vector<int>& a, vector <int> & b)
{
	rra(a);
	rrb(b);
}