// PRIVATE HEADER
#pragma once

#include "tools.h"
#include "../geometry/Point.h"
#include "../../utilities/items/Entity.h"
#include "../../utilities/items/EntityList.h"

class Line: public Entity{
public:
	// Default constructor
	Line();
	// Other constructors
	Line(Point arg_initial, Point arg_final);
	// Destructor
	~Line() = default;

	// Accessors
	// Other methods
	void set_global_index(int arg_global_index);

protected:
	// Attributes to be inherited
	// Overloaded methods

private:
	// Attributes
	int length;
	int global_index;
	Point initialPoint;
	Point finalPoint;
	EntityList<Point> innerNodes; // use add_entity();
	// Private methods
};