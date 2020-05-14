#include "Place.h"


Place::Place(std::string name, int x, int y)
{
	p_name = name;
	p_x = x;
	p_y = y;
}

Place::~Place()
{
}

void Place::visit()
{
	std::cout << p_name << " (" << p_x << "," << p_y << ")" << std::endl;
}
