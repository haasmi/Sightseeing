#pragma once
#include "Place.h"
#include <string>
#include <iostream>
//Name, Koordinaten und Beschreibung
class Sightseeing : public Place
{
public:
	Sightseeing(std::string name, int x, int y, std::string special);
	~Sightseeing();
	void visit() override;
	//Hallo qpiwekjrfnwäeörkvn 
protected: 
	std::string s_special;
};

