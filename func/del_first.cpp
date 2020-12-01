#include "sortic.h"
void del_first(vector <int>& arr) {
    vector <int> new_arr;
    if (arr.size() == 0)
        return;
    else if (arr.size() == 1)
        arr = new_arr;
    else if (arr.size() >= 2) {
        for (int i = 1; i < arr.size(); i++)
            new_arr.push_back(arr[i]);
        arr = new_arr;
    }
}