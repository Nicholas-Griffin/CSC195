#include "Database.h"
#include "Truck.h"
#include "Motorcycle.h"

Database::~Database() {
	for (Vehicle* obj : objects) {
		delete obj;
	}
}

void Database::Create(Vehicle::eType type) {
	Vehicle* obj = nullptr;

	switch (type) {
	case Vehicle::eType::Truck:
		obj = new Truck;
		break;
	case Vehicle::eType::Motorcycle:
		obj = new Motorcycle;
		break;
	}
	obj->Read(std::cout, std::cin);
	objects.push_back(obj);
}

void Database::DisplayAll() {
	for (Vehicle* obj : objects) {
		obj->Write(std::cout);
	}
}

void Database::Display(const std::string& name) {
	for (Vehicle* obj : objects) {
		if (obj->GetName() == name)
		{
			obj->Write(std::cout);
		}
	}
}

void Database::Display(Vehicle::eType type) {
	for (Vehicle* obj : objects) {
		if (obj->GetType() == type)
		{
			obj->Write(std::cout);
		}
	}
}