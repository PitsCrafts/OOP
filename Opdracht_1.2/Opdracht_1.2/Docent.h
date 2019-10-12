#pragma once
#include <string>
#include "Persoon.h"

class Docent : public Persoon {
private:
	int salaris;

public:
	int getSalaris();
	std::string getNaam();
	int getLeeftijd();
};
