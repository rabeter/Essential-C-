#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Stack
{
public:
	bool pop(string &elem);
	bool push (const string & elem);
	bool peek(string &elem) const;
	int size()const{
		return v.size();
	}
	bool full() const{
		return v.size() == v.max_size();
	}
	bool empty()const {
		return v.empty();
	}
private:
	std::vector<string> v;
};

int main(int argc, char const *argv[])
{
	Stack st;
	string str;
	while(cin >> str && !st.full())
	{
		st.push(str);
	}
	if (st.empty())
	{
		cout << "no string\n";
		return 0;
	}
	while(st.size())	
	{
		if (st.pop(str))
		{
			cout << str << " ";
		}
	}
	cout << endl;
	return 0;
}

bool Stack::pop(string &elem){
	if (!v.empty())
	{
		elem = v.back();
		v.pop_back();
		return true;
	}
	return false;
}
bool Stack::push(const string & elem){
	if (full())
	{
		return false;
	}
	v.push_back(elem);
	return true;
}
bool Stack::peek(string & elem)const{
	if (v.empty())
	{
		return false;
	}
	elem == v.back();
	return true;
}
