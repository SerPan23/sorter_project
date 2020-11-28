#ifndef SORTIC_H_INCLUDED
#define SORTIC_H_INCLUDED
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
void ft_super_shift_list(vector <int>& mass, int n);
void SetColor(int text, int bg);

void reverse_vector(vector <int>& arr);
void sa(vector <int>& a);
void sb(vector <int>& b);
void ss(vector <int>& a, vector <int>& b);
void pa(vector <int>& a, vector <int>& b);
void pb(vector <int>& a, vector <int>& b);

void ra(vector <int>& a);
void rb(vector <int>& b);
void rr(vector <int>& a, vector <int>& b);
void rra(vector <int>& a);
void rrb(vector <int>& b);
void rrr(vector <int>& a, vector <int>& b);

void fileWrite(int value, string path = "../tmp/file.txt");
void fileClear(string path);

void fill_array(vector <int>& arr);
void cout_array(const vector <int>& arr);
int convert_string_to_int(string str);
void simple_sort(vector <int>& arr, vector <int>& arr_sort);
void command_sort(vector <int>& a, vector <int>& b);
bool compare_arrays(vector <int>& a, vector <int>& a_sort);
#endif // SORTIC_H_INCLUDED
