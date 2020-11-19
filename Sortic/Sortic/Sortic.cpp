#include "../../func/sortic.h"
int main()
{
    vector <int> a;
    vector <int> b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    pa(a, b);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
}

