#include "sortic.h"

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
            rb(b); // ������� ����� ���� ��� �� ����
            fileWrite("rb", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
            cout << "rb" << endl;
            log(a, b, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        }
        fileWrite("******pa", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
        pa(a, b); // �� b � a ������� ������� ������� �������
        fileWrite("pa", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
        cout << "pa" << endl;
        log(a, b, "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\log.txt");
    }
    fileWrite("-------------", "E:\\Projects\\C++_codes\\sorter_project\\datafiles\\sortic\\output.txt");
}