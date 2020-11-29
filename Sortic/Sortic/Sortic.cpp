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

    while (size_b) {
        cout << "pb" << endl;
        pb(a, b);
        size_b--;
    }

    size_b = b.size();

    for (int i = 0; i < size_b; i++)
    {
        max = find_max(b);
        while (b[0] != max) {
            rb(b); // двигаем вверх пока это не макс
            cout << "rb" << endl;
        }
        pa(a, b); // из b в a двигаем свапаем верхний элемент
        cout << "pa" << endl;
    }

}

int main()
{
    vector <int> a;
    vector <int> b;
    string path, answer, input;
    int int_input;

    /*cout << "Do you want to clear the file? y/n ";
    cin >> answer;
    
    if (answer == "y") {
        cout << "Type previous file name or leave 's' if it is file.txt";
        cin >> path;
        if (path == "s") {
            fileClear("file.txt");
        } else {
            fileClear(path);
        }
    } */
    /*int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
        fileWrite(tmp, path);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }

    pa(a, b);

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }*/
    
    fill_array(a);
    sort_algorithm(a, b);
    cout_array(a);
    cout_array(b);
}

