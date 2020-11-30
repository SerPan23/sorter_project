#include "../../func/sortic.h"

int find_max(vector <int> a) {
    int max, temp;
    max = -1;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > max) max = a[i];
    }
    return max;
}

int find_min(vector <int> a) {
    int min, temp;
    min = 1001;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < min) min = a[i];
    }
    return min;
}

void sort_algorithm(vector<int>& a, vector<int>& b)
{
    int max, size_b;
    max = find_max(b);
    size_b = a.size();
    fileWrite("-------------", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
    while (size_b) {
        fileWrite("pb", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
        cout << "pb" << endl;
        fileWrite("******pb", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        pb(a, b);
        log(a, b, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        size_b--;
    }

    size_b = b.size();

    for (int i = 0; i < size_b; i++)
    {
        max = find_max(b);
        while (b[0] != max) {
            fileWrite("******rb", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
            rb(b); // двигаем вверх пока это не макс
            fileWrite("rb", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
            cout << "rb" << endl;
            log(a, b, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        }
        fileWrite("******pa", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        pa(a, b); // из b в a двигаем свапаем верхний элемент
        fileWrite("pa", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
        cout << "pa" << endl;
        log(a, b, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
    }
    fileWrite("-------------", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
}

int main()
{
    vector <int> a;
    vector <int> b;
    string path, answer, input;
    int int_input;
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
    //cout << endl;
    
    //fill_array(a);
    //cout_array(a);
    //cout_array(b);
    //cout << endl;
}

