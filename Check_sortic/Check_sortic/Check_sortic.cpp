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
        fileWrite("a|b", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\check_sortic\\log.txt");
        fill_and_sort_array_from_file_for_check_sort(a, b, a_sort);
        fileWrite("---------------------", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\check_sortic\\log.txt");
    }
    else {
        fill_array(a);
        simple_sort(a, a_sort);
        fileWrite("a|b", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\check_sortic\\log.txt");
        command_sort(a, b);
        fileWrite("---------------------", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\check_sortic\\log.txt");
    }
    cout_result_for_check(a, a_sort);
}
