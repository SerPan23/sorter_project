#include "../../func/sortic.h"
int main()
{
    vector <int> a;
    vector <int> b;
    fill_array(a);
    fill_array(b);

    vector <int> t;
    simple_sort(a, t);

    cout_array(t);
    //cout_array(b);
}
