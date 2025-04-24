#pragma once
#include "Vehicle.h"

class Truck : public Vehicle {
public:
	bool closedTruckBed  = false;

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eType GetType() override { return eType::Truck; }

	bool hasClosedTruckBed() {
		return closedTruckBed;
	}
};
