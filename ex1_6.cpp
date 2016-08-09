#include <iostream>
#include <vector>
using namespace std;

int main()
{
	std::vector<int> ivec;
	int ival;
	while(cin>>ival)
		ivec.push_back(ival);
	int sum = 0;
	for (int i = 0; i < ivec.size(); ++i)
	{
		sum += ivec[i];
	}
	int average = sum/ivec.size();
	cout << "Sum of" << ivec.size()
		<< "elements:" << sum
		<< ".Average:"<< average << endl;
	return 0;
}