
#include <iostream>
#include "Database.h"
using namespace std;

int main(){
    string a = " ";
	Database database;
    bool quit = false;
    while (!quit)
    {
        std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1: 
            std::cout << "Enter type (0 for Truck, 1 for Motorcycle): ";
            int t;
            std::cin >> t;
            database.Create(static_cast<Vehicle::eType>(t)); 
            break;
        case 2: 
            database.DisplayAll(); 
            break; 
        case 3:  
            std::cout << "Enter name: ";
            std::cin >> a;
            database.Display(a); 
            break;
        case 4:
        {
            std::cout << "Enter type (0 for Truck, 1 for Motorcycle): ";
            int t;
            std::cin >> t;
            database.Display(static_cast<Vehicle::eType>(t)); 
            break;
        }
        case 5:
            quit = true;
            break;
        }
    }
	return 0;
}