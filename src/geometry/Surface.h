// PRIVATE HEADER
#pragma once

#include "tools.h"

class Surface{
public:
	// Default constructor
	Surface();
	// Other constructors
	Surface(std::string arg_line);
	// Destructor
	~Surface() = default;

	// Accessors
	void method_one();
	// Other methods
	void method_two();

protected:
	// Attributes to be inherited
	// Overloaded methods
	virtual void method_three();

private:
	// Attributes
	// Private methods
	void method_four();
};