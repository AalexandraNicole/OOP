#include "RangeRover.h"

RangeRover::RangeRover()
{
	fuelCapacity = 80;	// L
	fuelConsumption = 6;	// L / 100 km 
	avrSpeed[Rain] = 60;	// km / h
	avrSpeed[Sunny] = 140; // km / h
	avrSpeed[Snow] = 40; // km / h
}
void RangeRover::printName()
{
	std::cout << "RangeRover: ";
}
const float RangeRover::speedBasedOnWeather(Weather w)
{
	return avrSpeed[w];
}