#include <iostream>
#include "message.h"
using namespace std;

MessageBook::MessageBook() {

}

MessageBook::~MessageBook() {

}

void MessageBook::AddMessage(int number, const std::string& message) {
	messages_.insert(make_pair(number, message));
}

void MessageBook::DeleteMessage(int number) {
	messages_.erase(number);
		}
	


const std::string& MessageBook::GetMessage(int number) {
map<int,string>::iterator iter ;
	for (map<int, string>::iterator it = messages_.begin(); it != messages_.end(); it++) {
		if (it->first == number) {
			iter = it;
			break;
		}
	}
	return iter->second;
}

void MessageBook::PrintList() {
	for (map<int, string>::iterator it = messages_.begin(); it != messages_.end(); it++) {
		cout << it->first << ": " << it->second << endl;
		}
	}


