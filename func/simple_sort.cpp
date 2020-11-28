#include "sortic.h"
vector <int> simple_sort(vector <int>& arr) {
	vector <int> arr_sort;
    int tmp;
    for (int i = 0; i < arr_sort.size() - 1; i++) {
        for (int j = 0; j < arr_sort.size() - i - 1; j++) {
            if (arr_sort[j] > arr_sort[j + 1]) {
                // меняем элементы местами
                tmp = arr_sort[j];
                arr_sort[j] = arr_sort[j + 1];
                arr_sort[j + 1] = tmp;
            }
        }
    }
}