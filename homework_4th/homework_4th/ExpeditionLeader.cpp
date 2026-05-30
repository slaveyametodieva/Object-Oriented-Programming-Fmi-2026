	#include "ExpeditionLeader.h"
	#include <print>
	ExpeditionLeader::ExpeditionLeader(const std::string& inpName, unsigned int inpYearsExp,
		unsigned int inpExpLed): Cartographer(inpName, inpYearsExp), expeditionsLed(inpExpLed)
	{
	}

	void ExpeditionLeader::printInfo() const
	{
		std::print("Name: {}, yearsOfExperience: {} expeditions led: {}", expeditionsLed,
			Cartographer::getName(), Cartographer::getYearsOfExp());
	}

	 std::string ExpeditionLeader::getRole() const
	{
		return "ExpeditionLeader";
	}
