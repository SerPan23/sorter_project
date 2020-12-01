#include "sortic.h"
void cout_result_for_check(vector <int>& a, vector <int>& a_sort) {
    cout << endl;
    if (compare_arrays(a, a_sort)) {
        SetColor(10, 0);
        cout << "OK";
        fileWrite("-----");
        fileWrite("OK");
        fileWrite("-----");
    }
    else {
        SetColor(12, 0);
        cout << "KO";
        fileWrite("-----");
        fileWrite("KO");
        fileWrite("-----");
    }
    SetColor(7, 0);
    cout << endl;
}