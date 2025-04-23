#pragma once
#include <iostream>
using namespace std;

class Vehicle {
public:

	enum class eType {
		Truck,
		Motorcycle
	};

	string name;
	bool loud;

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	string GetName() {
		return name;
	}
	bool IsLoud() {
		return loud;
	}

	virtual eType GetType() = 0;

};


