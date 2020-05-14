#include <string>
#include <iostream>
#include "Toilet.h"
#include "Sightseeing.h"
#include "Place.h"

int main() {
	Place* Zuhause = new Place("Zuhause", 1, 1);
	Place* Urlaub = new Place("Hotel", 27, 14);
	Sightseeing* Eiffelturm = new Sightseeing("Eiffelturm", 12, 12, "bunte Lichter");
	Toilet* Schule = new Toilet("Schulklo", 17, 3, "ekelig");
	Schule->visit();
	Eiffelturm->visit();
	Zuhause->visit();
	Urlaub->visit();
}