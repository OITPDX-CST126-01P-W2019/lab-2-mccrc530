#pragma once
#include <string>
#include <iostream>
#include <iomanip>

class Bottle
{
public:
	Bottle();
	Bottle(std::string const & inputColor, std::string const & inputType, int const inputAge, double const inputValue);
	void printBottle() const;
	double getValue() const;

private:
	std::string color, type;
	int age;
	double value;
	void initializeBottle(std::string const & inputColor, std::string const & inputType, int const inputAge, double const inputValue);
};
