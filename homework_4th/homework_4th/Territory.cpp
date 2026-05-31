#include "Territory.h"
#include <algorithm>
Territory::Territory(std::vector<std::unique_ptr<Landmark>> inpLandmarks) :
	landmarks(std::move(inpLandmarks))
{
}

void Territory::addLandmark(std::unique_ptr<Landmark> joiningLandmark)
{
	landmarks.push_back(std::move(joiningLandmark));
}

std::unique_ptr<Landmark> Territory::removeLandmark(const std::string& name)
{
	auto findIt = std::find_if(landmarks.begin(),
		landmarks.end(), [&name](const std::unique_ptr<Landmark>& currL) {return currL->getName() == name; });

	if (findIt != landmarks.end())
	{
		std::unique_ptr<Landmark> extractedLandmark = std::move(*findIt);
		landmarks.erase(findIt);

		return extractedLandmark;
	}
	
	throw std::invalid_argument("The name was not found!");

}
