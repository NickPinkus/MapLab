#include "Location.h"



Location::Location(string name, int xCoord, int ycoord) : _name(name)
{
}


Location::~Location()
{
}

string Location::DisplayLocationInfo()
{
	return _name + "\n";
}

int Location::getXCoord()
{
	return xCoord;
}

int Location::getYCoord()
{
	return yCoord;
}

string Location::getNewCoordinates(int x, int y)
{
	return (xCoord + x) + "," + (yCoord + y);
}
