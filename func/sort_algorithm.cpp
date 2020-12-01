#include "sortic.h"
void sort_algorithm(vector<int>& a, vector<int>& b)
{
    int max, size_b, index, size;
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
        size = (b.size() - 1) / 2;
        max = find_max(b);
        index = find_index(b, max);
        if (index == 0) {
            fileWrite("******pa", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
            pa(a, b);
            fileWrite("pa", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
            cout << "pa" << endl;
            log(a, b, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        }
        else if (index < size) {
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
        else {
            while (b[0] != max) {
                fileWrite("******rrb", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
                rrb(b); // двигаем вниз пока это не макс
                fileWrite("rrb", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
                cout << "rrb" << endl;
                log(a, b, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
            }
            fileWrite("******pa", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
            pa(a, b); // из b в a двигаем свапаем верхний элемент
            fileWrite("pa", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
            cout << "pa" << endl;
            log(a, b, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        }

    }
    fileWrite("-------------", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
}