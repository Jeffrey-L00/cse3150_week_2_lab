 #include "parser.h"
#include <string>

void StringUtils::parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
	size_t pos = fullName.find(' ');

	if (pos != std::string::npos) {
		*firstName = fullName.substr(0, pos);
		*lastName = fullName.substr(pos + 1);
	}	
}
std::string StringUtils::getUsername(const std::string& email) {
	size_t pos = email.find('@');
	
	if (pos != std::string::npos) {
		return email.substr(0, pos);
	}
	return 0;
}
