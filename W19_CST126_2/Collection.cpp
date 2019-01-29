#include "pch.h"
#include "Collection.h"

Collection::Collection(std::ifstream & file)
{
	std::string colorInput{}, typeInput{};
	int ageInput{};
	double valueInput{};
	int i{0};
	while(!file.eof())
	{
		file >> colorInput >> typeInput >> ageInput >> valueInput;
		Bottle const nextBottle(colorInput, typeInput, ageInput, valueInput);
		bottles[i] = nextBottle;
		i++;
	}
	bottleCount = i;
}

double Collection::getTotalValue() const
{
	double totalValue{ 0.0 };
	for(int i = 0; i != bottleCount; i++)
	{
		totalValue += bottles[i].getValue();
	}
	return totalValue;
}

void Collection::printCollection() const
{
	std::cout << std::setw(10) << "COLOR" << std::setw(10) << "TYPE" << std::setw(10) << "AGE" << std::setw(10) << "VALUE" << std::endl;
	std::cout << std::setw(10) << "=====" << std::setw(10) << "====" << std::setw(10) << "===" << std::setw(10) << "=====" << std::endl;
	for (int i = 0; i != bottleCount; i++)
	{
		bottles[i].printBottle();
	}
	std::cout << "There are " << bottleCount << " bottles." << std::endl;
	std::cout << "Your collection is worth: " << getTotalValue() << std::endl;
}

