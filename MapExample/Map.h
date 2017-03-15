#pragma once
#include <stack>
#include "Location.h"
using namespace std;

class Map
{
private:
	stack<Location *> _locationsVisited;
	
public:
	Map(string startLocationName);
	~Map();

	Location * CurrentLocation = nullptr;
	string GetPathBackToHome();
	void Move(Location *newLocation);
};

