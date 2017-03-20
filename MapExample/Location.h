#pragma once
#include <string>
using namespace std;

class Location
{
private:
	string _name;
	int xCoord = 0;
	int yCoord = 0;
public:
	Location(string name, int xCoord, int yCoord);
	~Location();
	string DisplayLocationInfo();

	Location *North = nullptr;
	Location *South = nullptr;
	Location *East = nullptr;
	Location *West = nullptr;

	int getXCoord();
	int getYCoord();
	string getNewCoordinates(int, int);
};

