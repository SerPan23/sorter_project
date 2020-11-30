#include "../../func/sortic.h"
int main()
{
    vector <int> a;
    vector <int> a_sort;
    vector <int> b;
    
    string otv;
    cout << "Do you want fill form file?(print y or n): ";
    cin >> otv;
    if (otv == "y") {
        fill_and_sort_array_from_file_for_check_sort(a, b, a_sort);
    }
    else {
        fill_array(a);
        simple_sort(a, a_sort);
        command_sort(a, b);
    }
    cout << endl;
    if (compare_arrays(a, a_sort)) {
        SetColor(2, 0);
        cout << "OK";
        fileWrite("OK");
    }
    else {
        SetColor(4, 0);
        cout << "KO";
        fileWrite("KO");
    }
    SetColor(7, 0);
    //cout_array(a);
    //cout_array(b);
}
