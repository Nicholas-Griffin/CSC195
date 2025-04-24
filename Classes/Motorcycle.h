#pragma once
#include "Vehicle.h"

class Motorcycle : public Vehicle {
public:
	bool sideCarriage = false;

	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
	eType GetType() override { return eType::Motorcycle; }

	bool hasSideCarriage() {
		return sideCarriage;
	}
};