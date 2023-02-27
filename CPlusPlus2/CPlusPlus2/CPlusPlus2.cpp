#include <iostream>
#include <fstream>
#include <string>
#include "addressbook.pb.h"
using namespace std;

int main() {

	tutorial::Person_PhoneNumber* PhoneNumber = new tutorial::Person_PhoneNumber();
	PhoneNumber->set_number("555-515-9135");
	std::string Serialized = PhoneNumber->SerializeAsString();
	std::cout << Serialized << std::endl;

}