#include "minGradeRequirement.h"

minGradeRequirement::minGradeRequirement(double inpMinAvgGrade) : minAvgGrade(inpMinAvgGrade)
{
	if (inpMinAvgGrade < MIN_AVG_GRADE || inpMinAvgGrade > MAX_AVG_GRADE)
	{
		throw std::invalid_argument("The inputed average grade is invalid");
	}
}

std::optional<std::string> minGradeRequirement::check(const Student& s) const
{
	if (s.getAverageGrade() < minAvgGrade)
	{
		return "The student does not have the minimum average grade";
	}
	return std::nullopt;
}
