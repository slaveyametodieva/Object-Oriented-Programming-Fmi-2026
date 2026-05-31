#pragma once
#include "Landmark.h"
#include <memory>
#include <vector>
#include <string>
#include <stdexcept>
class Territory
{
	private:
		std::vector<std::unique_ptr<Landmark>> landmarks;

	public:
		Territory(std::vector<std::unique_ptr<Landmark>> inpLandmarks);
		void addLandmark(std::unique_ptr<Landmark> joiningLandmark);
		std::unique_ptr<Landmark> removeLandmark(const std::string& name);
		void setDangerLever(unsigned int inpDangerLevel);
		bool hasLandmark(const std::string& name);
		void print() const;
};

