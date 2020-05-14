#include "Toilet.h"

Toilet::Toilet(std::string name, int x, int y, std::string special)
	:Place(name, x, y)
{
	t_special = special;
}

Toilet::~Toilet()
{
}

void Toilet::visit()
{
	std::cout << p_name << " (" << p_x << "," << p_y << ") " << "Hier stinkt es nach " << t_special << std::endl;
}
