#include "Truck.h"
#include <iostream>
using namespace std;

void Truck::Read(std::ostream& ostream, std::istream& istream) {
	Vehicle::Read(ostream, istream);
	ostream << "Covered Truck Bed? (T/F, 1 for true, 2 for false): ";
	int a;
	istream >> a;
	switch (a) {
	case 1:
		closedTruckBed = true;
		break;
	case 2:
		closedTruckBed = false;
		break;
	default:
		closedTruckBed = false;
	}
	ostream << endl;
}

void Truck::Write(std::ostream& ostream) {
	Vehicle::Write(ostream);
	ostream << "Has Covered Truck Bed: " << boolalpha << closedTruckBed << endl;
}