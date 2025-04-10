#include "Containers.h"
#include <string>
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
using namespace std;

void Array() {
	array<string, 7> a = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	for (string b : a) {
		cout << b << endl;
	}
}

void Vector() {
	vector<int> a = {1,2,3,4,5};
	a.push_back(6);
	a.push_back(7);
	a.pop_back();
	for (int b : a) {
		cout << b << endl;
	}
}

void List() {
	list<string> a = {"Apple", "Tomato", "Orange"};
	a.push_front("Banana");
	a.push_back("Pomegranite");
	a.remove("Tomato");
	for (string b : a) {
		cout << b << endl;
	}
}

void Map() {
	map<string, int> a;
	a["Apples"] = 10;
	a["Oranges"] = 8;
	a["Tomatoes"] = 0;
	a["Tomatoes"] = 25;

	for (auto b : a) {
		cout << b.first << "->" << b.second << endl;
	}
}