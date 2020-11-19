#include "sortic.h"
void ra(vector<int>& a)
{
	ft_super_shift_list(a, 1);
}

void rb(vector<int>& b)
{
	ft_super_shift_list(b, 1);
}

void rr(vector<int>& a, vector<int>& b)
{
	ra(a);
	rb(b);
}