#include <iostream>
#include "parser.h"
#include <string>

using std::cout, std::cin, std::endl, std::string, std::getline;

int main() {
	string fullName; //initalizes fullName variable as a string
	std::getline(cin, fullName); //grabs the full line from input instead of stopping at a whitespace

	string email;
	cin >> email; //reads input but stops at whitespace, good for single words like a email address but not a sentence

	
	string* firstName = new std::string; //dynamically allocates two string objects onto heap. pointer to std::string, holding the memory address. parseName expects memory addresses to write directly to the locations. ('new' allocates memory on the heap)
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

