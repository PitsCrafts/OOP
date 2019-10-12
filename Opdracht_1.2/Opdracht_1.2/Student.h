#pragma once
#include <string>
#include "Persoon.h"

class Student : public Persoon {
private:
	int schuld;

public:
	int getSchuld();
	std::string getNaam();
	int getLeeftijd();
};