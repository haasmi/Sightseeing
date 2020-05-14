#include "Sightseeing.h"

Sightseeing::Sightseeing(std::string name, int x, int y, std::string special)
	:Place(name, x, y)
{
	s_special = special;
}

Sightseeing::~Sightseeing()
{
}

void Sightseeing::visit()
{
	std::cout << p_name << " (" << p_x << "," << p_y << ") " << "Hier sieht man " << s_special << std::endl;
}
