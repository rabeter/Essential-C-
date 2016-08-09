#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ifstream in_file("C:\\text.txt");
	if (!in_file)
	{
		cerr << "oops! unable to open input file\n";
		return -1;
	}
	ofstream out_file("C:\\text.txt");
	if (!out_file)
	{
		cerr << "opps! unable to open output file\n";
		return -2;
	}
	string word;
	std::vector<string> text;
	while (in_file >> word)
		text.push_back(word);
	int ix;
	cout << "unsorted text:\n";
	for (int i = 0; i < text.size(); ++i)
	{
		cout << text[i] << " ";
	}
	cout << endl;
	sort(text.begin(), text.end());
	out_file << "sorted text: \n";
	for (int i = 0; i < text.size(); ++i)
	{
		out_file << text[i] << ""；
	}
	out_file <<endl;
	return 0;

}