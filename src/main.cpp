#include <iostream>
#include "parser.h"
#include <string>

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
	string fullName;
	std::getline(cin, fullName);

	string email;
	cin >> email;
	
	string* firstName = new std::string;
	string* lastName = new std::string;

	StringUtils::parseName(fullName, firstName, lastName);
	string userName = StringUtils::getUsername(email);
	
	
	cout << "First Name:" << *firstName << endl;
	cout << "Last Name:" << *lastName << endl; 
	cout << "Username:" << userName << endl;
	
	delete firstName;
	delete lastName;
	return 0;
}	

