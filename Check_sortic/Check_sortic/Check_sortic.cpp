#include "../../func/sortic.h"
void SetColor(int text, int bg) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
int main()
{
    vector <int> a;
    vector <int> a_sort;
    vector <int> b;
    fill_array(a);
    simple_sort(a, a_sort);
    command_sort(a, b);

    if (compare_arrays(a, a_sort)) {
        SetColor(2, 0);
        cout << "OK";
    }
    else {
        SetColor(4, 0);
        cout << "KO";
    }
    SetColor(7, 0);
    //cout_array(a);
    //cout_array(b);
}
