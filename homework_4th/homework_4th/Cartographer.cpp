#include "Cartographer.h"
#include <print>
Cartographer::Cartographer(const std::string& inpName, unsigned int inpYearsExp) : 
	name(inpName), yearsOfExperience(inpYearsExp)
{
}
unsigned int Cartographer::getYearsOfExp() const
{
	return yearsOfExperience;
}

const std::string& Cartographer::getName() const
{
	return name;
}
