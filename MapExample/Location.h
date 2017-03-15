#pragma once
#include <string>
using namespace std;

class Location
{
private:
	string _name;
	
public:
	Location(string name);
	~Location();
	string DisplayLocationInfo();

	Location *North = nullptr;
	Location *South = nullptr;
	Location *East = nullptr;
	Location *West = nullptr;
};

