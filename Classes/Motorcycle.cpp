#include "Motorcycle.h"
#include <iostream>
using namespace std;

void Motorcycle::Read(std::ostream& ostream, std::istream& istream) {
	Vehicle::Read(ostream, istream);
	ostream << "Has Side Carriage? (T/F, 1 for true, 2 for false): ";
	int a;
	istream >> a;
	switch (a) {
	case 1:
		sideCarriage = true;
		break;
	case 2:
		sideCarriage = false;
		break;
	default:
		sideCarriage = false;
	}
	ostream << endl;
}

void Motorcycle::Write(std::ostream& ostream) {
	Vehicle::Write(ostream);
	ostream << "Has Side Carriage: " << boolalpha << sideCarriage << endl;
}