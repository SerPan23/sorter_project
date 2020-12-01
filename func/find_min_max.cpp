#include "sortic.h"
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