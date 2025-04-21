#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void Square(int& a) {
	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section

	a = a * a;

	// output the int variable to the console

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
}

void Double(int* a) {
	*a = *a * 2;
}

int main()
{

	// ** REFERENCE **
	// declare an int variable and set the value to some number (less than 10)
	// declare a int reference and set it to the int variable above
	int a = 7;
	int& b = a;

	// output the int variable
	//cout << a << endl;

	// set the int reference to some number
	//b = 10;

	// output the int variable
	//cout << a << endl;

	// what happened to the int variable when the reference was changed? (insert answer)
	//The variable was changed to match what the reference was changed to.

	// output the address of the int variable
	//cout << &a << endl;

	// output the address of the int reference
	//cout << &b << endl;

	// are the addresses the same or different? (insert answer)
	//They are the same.

	/*Square(a);
	
	cout << a << endl;*/


	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* pointer = nullptr;

	// set the int pointer to the address of the int variable created in the REFERENCE section
	pointer = &a;

	// output the value of the pointer
	//cout << pointer << endl;

	// what is this address that the pointer is pointing to? (insert answer)
	// It is pointing to the address of the variable "a"
	
	// output the value of the object the pointer is pointing to (dereference the pointer)
	//cout << *pointer << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(pointer);

	// output the dereference pointer
	cout << *pointer << endl;

	// output the int variable created in the REFERENCE section
	cout << a << endl;

	// did the int variable's value change when using the pointer?
	//Yes, using the dereferenced pointer allows for changing the variable the pointer is pointing at

}