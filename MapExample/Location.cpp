#include "Location.h"



Location::Location(string name) : _name(name)
{
}


Location::~Location()
{
}

string Location::DisplayLocationInfo()
{
	return _name + "\n";
}