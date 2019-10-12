#pragma once
#include <string>

class Persoon
{
private:


public:
	std::string naam;
	int leeftijd;
	Persoon(const std::string naam, int leeftijd);
	virtual std::string getNaam();
	virtual int getLeeftijd();
};

