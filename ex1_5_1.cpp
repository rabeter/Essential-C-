#include <iostream>
#include <string>
using namespace std;
 int main()
 {
 	string user_name;
 	cout << "Please enter your name: ";
 	cin >> user_name;
 	switch(user_name.size()){
 		case 0:
	 		cout << "the user with no name.";
	 		break;
 		case 1:
 			cout << "A 1-character name? Hnm, have you read Kafka?:"
 			user_name << endl;
 			break;
 		default:
 		cout << "Hello," << user_name
 			<< "happy to make your acquaintance!\n";
 		
 	}
 	return 0;
 }