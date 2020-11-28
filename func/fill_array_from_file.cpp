#include "sortic.h"
void fill_array_from_file(vector <int>& arr, string path) {
	string tmp;
	cout << path << endl;
	ifstream input(path);
	if (input.is_open())
	{
		while (getline(input, tmp) && (tmp != "!" || tmp != "*"))
		{
			int t = convert_string_to_int(tmp);
			cout << t << " ";
			arr.push_back(t);
		}
	}
	input.close();
}