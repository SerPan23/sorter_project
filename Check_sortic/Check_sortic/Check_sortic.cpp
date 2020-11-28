#include "../../func/sortic.h"
int main()
{
    vector <int> a;
    vector <int> a_sort;
    vector <int> b;
    fill_array(a);
    //fill_array(b);
    simple_sort(a, a_sort);

    cout_array(a);
    //cout_array(b);
}
