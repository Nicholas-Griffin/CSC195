#pragma once
#include "Vehicle.h"
#include <vector>
using namespace std;

class Database {
public:
	vector<Vehicle*> objects;

	~Database();
	void DisplayAll();
	void Display(const string& name);
	void Display(Vehicle::eType type);
	void Create(Vehicle::eType type);
};
