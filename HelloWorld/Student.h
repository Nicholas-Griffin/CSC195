#pragma once
#include "string"

void f();
class Student {
private:
	std::string name;
public:
	Student() {}
	Student(std::string name) {
		this->name = name;
	}

	void Write();
	std::string getName() { return name; }
	void setName(std::string name) {
		this->name = name;
	}
};