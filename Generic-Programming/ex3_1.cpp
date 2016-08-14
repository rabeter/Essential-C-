#include <iostream>
#include <string>
#include <map>
#include <set>
#include <fstream>
using namespace std;

void initialize_exclusion_set(set<string>&);
void process_file(std::map<string, int>&, const set<string>&, ifstream&);
void user_query(const map<string, int>&);
void display_word_count(const map<string, int>&,ofstream&); 

int main(int argc, char const *argv[])
{
	
	return 0;
}

void initialize_exclusion_set(set<string &exs)
{
	static string _excluded_word[13] = {
		"the", "and", "but", "that", "are", "of", 
		"can", "his", "is", "her",
		"where", "when", "with"
	};
	exs.insert(_excluded_word, _excluded_word+13);
}

void process_file(std::map<string, int> &word_count, 
	const set<string> &_excluded_set, ifstream &ifile)
{
	string word;
	while(ifile >> word)
	{
		if (_excluded_set.count(word))
			continue;
		word_countd[word]++;
		
	}
}

void user_query(const std::map<string, int> &word_map)
{
	string search_word;
	cout << "please enter a word to search: q to quit";
	cin >> search_word;
	while(search_word.size() && search_word != "q")
	{
		std::map<string, int>::const_iterator it;
		if ((it = word_map.find(search_word)) != word_map.end())
		{
			cout << "Found! " << it->first
			<< "occurs" << it->second <<"time.\n";
		}else
		{
			cout << search_word <<"was not found in text.\n";
			cout << "Antother search? (q to quit)";
			cin >> search_word;
		}
	}
}

void display_word_count(const std::map<string, int> &word_map, ofstream &os)
{
	std::map<string, int>:: const_iterator iter = word_map.begin(),
	end_it = word_map.end();
	while(iter != end_it)
	{
		os << iter->first << "("
		<< iter->second << ")"
		<< endl;
		iter++;
	}
	os << endl;
}
