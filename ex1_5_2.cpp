#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
	const int nm_size =128;
	char user_name[nm_size];
	cout << "Please enter your name:";
	cin >> setw(nm_size) >> user_name; //setw()保持输入位数
	switch(strlen(nm_size)){
		case 0:
	 		cout << "the user with no name.";
	 		break;
 		case 1:
 			cout << "A 1-character name? Hnm, have you read Kafka?:"
 			user_name << endl;
 			break;
 		case 127:
 		cout << "That is a very big name, indeed we may have to shorten it!\n"
 			<< "IN any case,\n";
 		default:
 		cout << "Hello," << user_name
 			<< "happy to make your acquaintance!\n";
 		
	}


	return 0;
}
