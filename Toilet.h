#pragma once
#include "Place.h"
#include <string>
#include <iostream>
//Name, Koordinaten, Gestank
class Toilet : public Place
{
public:
	Toilet(std::string name, int x, int y, std::string special);
	~Toilet();
	void visit() override;

protected:
	std::string t_special;
};

