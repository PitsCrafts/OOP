#pragma once
#include <string>

class Persoon
{
private:
	

public:
	std::string naam;
	int leeftijd;
	Persoon(std::string naam, int leeftijd);
	std::string getNaam();
	int getLeeftijd();
};

