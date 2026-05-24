#pragma once

#include <optional>
#include <string>
#include "Student.h"
class Requirement
{
	public:
		virtual std::optional<std::string> check(const Student& s) const = 0;
		virtual ~Requirement() = default;
};