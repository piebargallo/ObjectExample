// C++ Program to Illustrate How
// Default Virtual Behave

// Importing required libraries
// Input output stream
#include <iostream>

using namespace std;

// Class 1
// Superclass
class Base {

	// Granting public access via
	// public access modifier
public:
	// In c++, non-virtual by default
	// Method of superclass
	void show()
	{

		// Print statement
		cout << "Base::show() called";
	}

};

// Class 2
// Subclass
class Derived : public Base {

	// Granting public access via public access modifier
public:
	// Method of subclass
	void show()
	{

		// Print statement
		cout << "Derived::show() called";
	}

};

// Main driver method
int main() {
	
	// Creating object of subclass
	Derived d;
	
	// Creating object of subclass
	// with different reference
	Base& b = d;

	// Calling show() method over
	// Superclass object
	b.show();

	getchar();

	return 0;

} // End driver
