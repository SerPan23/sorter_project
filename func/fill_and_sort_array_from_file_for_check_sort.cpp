#include "sortic.h"
void fill_and_sort_array_from_file_for_check_sort(vector <int>& arr, vector <int>& b, vector <int>& a_sort, string path) {
	string tmp;
	bool f = 0;
	//cout << path << endl;
	ifstream input(path);
	if (input.is_open())
	{
		while (getline(input, tmp))
		{
			if (tmp == "!") {
				f = 1;
				simple_sort(arr, a_sort);
				check_log(arr, b);
				continue;
			}
			if (tmp != "!" && f == 0) {
				int t = convert_string_to_int(tmp);
				//cout << tmp << "|" << t << endl;
				arr.push_back(t);
			}
			else if (tmp != "*" && f == 1) {
				make_command(arr, b, tmp);
			}
		}
	}
	input.close();
}