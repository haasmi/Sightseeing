#pragma once
#include <string>
#include <iostream>

//haben Namen und Koordinaten
//kann man besuchen, geben dabei Name und Position aus

class Place
{
public:
	Place(std::string name, int x, int y);
	~Place();
	virtual void visit();

protected:
	std::string p_name;
	int p_x;
	int p_y;
};

