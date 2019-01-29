#include "pch.h"
#include "Bottle.h"


Bottle::Bottle()
{
	color = "";
	type = "";
	age = 0;
	value = 0.0;
}

Bottle::Bottle(std::string const & inputColor, std::string const & inputType, int const inputAge, double const inputValue)
{
	initializeBottle(inputColor, inputType, inputAge, inputValue);
}

void Bottle::initializeBottle(std::string const & inputColor, std::string const & inputType, int const inputAge, double const inputValue)
{
	color = inputColor;
	type = inputType;
	age = inputAge;
	value = inputValue;
}

void Bottle::printBottle() const
{
	std::cout << std::setw(10) << color << std::setw(10) << type << std::setw(10) << age << std::setw(10) << value << std::endl;
}

double Bottle::getValue() const
{
	return value;
}