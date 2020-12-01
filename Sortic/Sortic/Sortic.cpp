#include "../../func/sortic.h"

int main()
{
    vector <int> a;
    vector <int> b;
    string path, answer, input;
    string otv;
    cout << "Do you want fill form file?(print y or n): ";
    cin >> otv;
    if (otv == "y") {
        fileWrite("a|b", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        fill_array_from_file_for_sort(a, b);
        sort_algorithm(a, b);
        fileWrite("---------------------", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
    }
    else {
        fill_array(a);
        fileWrite("a|b", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        sort_algorithm(a, b);
        fileWrite("---------------------", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
    }
}

