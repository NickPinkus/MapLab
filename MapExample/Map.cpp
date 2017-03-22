#include "Map.h"



Map::Map(string startLocationName)
{
	CurrentLocation = new Location(startLocationName, 0, 0);
	_locationsVisited.push(CurrentLocation);
}


Map::~Map()
{
}

void Map::Move(Location *newLocation) 
{	
	_locationsVisited.push(newLocation);
	CurrentLocation = newLocation;
}

string Map::GetPathBackToHome()
{
	string result = "Path back to Home:\n";

	while (_locationsVisited.size() != 0)
	{
		result += _locationsVisited.top()->DisplayLocationInfo();
		_locationsVisited.pop();
	}

	CurrentLocation = Map("Home").CurrentLocation;

	return result;
}
