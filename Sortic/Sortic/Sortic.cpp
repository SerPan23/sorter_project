#include "../../func/sortic.h"
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
    fill_array(b);
    rrr(a, b);
    
    cout_array(a);
    cout << endl;
    cout_array(b); 
}

