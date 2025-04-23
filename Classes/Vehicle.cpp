#include "Vehicle.h"
#include <iostream>
using namespace std;

void Vehicle::Read(std::ostream& ostream, std::istream& istream) {
	ostream << "Enter Name:";
	istream >> name;
	ostream << endl;
	ostream << "It is loud(T/F, 1 for true, 2 for false):";
	int a;
	istream >> a;
	switch(a) {
		case 1:
			loud = true;
			break;
		case 2:
			loud = false;
			break;
		default:
			loud = false;
	}
	ostream << endl;
}

void Vehicle::Write(std::ostream& ostream) {
	ostream << "Name: " << name << endl;
	ostream << "Is Loud: " << boolalpha << loud << endl;
}

