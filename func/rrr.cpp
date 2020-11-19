#include "sortic.h"
void rra(vector<int>& a)
{
	ft_super_shift_list(a, 1);
}

void rrb(vector<int>& b)
{
	ft_super_shift_list(b, 1);
}

void rrr(vector<int>& a, vector <int> & b)
{
	rra(a);
	rrb(b);
}