#include "sortic.h"
void ft_super_shift_list(vector <int> &mass, int n)
{
    int len = mass.size();
    if(n > 0)
    {
        for(int j = 0; j < n; j++)
        {
            int tmp = mass[0];
            for(int i = 1; i < len; i++)
            {
                //cout << mass[i] << " " << tmp << " || ";
                int t = mass[i];
                mass[i] = tmp;
                tmp = t;
                //cout << mass[i] << " " << tmp << endl;
            }
            mass[0] = tmp;
        }
    }
    else if(n < 0)
    {
        for(int j = 0; j < n*(-1); j++)
        {
            int tmp = mass[len-1];
            for(int i = len-1; i >= 0; i--)
            {
                //cout << mass[i] << " " << tmp << " || ";
                int t = mass[i];
                mass[i] = tmp;
                tmp = t;
                //cout << mass[i] << " " << tmp << "//" << i << endl;
            }
            mass[len-1] = tmp;
        }
    }

}
