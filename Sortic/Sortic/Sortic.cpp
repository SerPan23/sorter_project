#include "../../func/sortic.h"
int main()
{
    vector <int> mass;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        mass.push_back(tmp);
    }
    sa(mass);
    for (int i = 0; i < n; i++) {
        cout << mass[i];
    }
}

