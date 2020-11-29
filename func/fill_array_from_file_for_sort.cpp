#include "sortic.h"
void fill_array_from_file_for_sort(vector <int>& arr, string path) {
	string tmp;
	//cout << path << endl;
	ifstream input(path);
	if (input.is_open())
	{
		while (getline(input, tmp))
		{
			if (tmp != "!" && tmp != "*") {
				int t = convert_string_to_int(tmp);
				//cout << tmp << "|" << t << endl;
				arr.push_back(t);
			}
		}
	}
	input.close();
}