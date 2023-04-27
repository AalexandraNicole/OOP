#include "BMW.h"

BMW::BMW()
{
	fuelCapacity = 78;	// L
	fuelConsumption = 7;	// L / 100 km 
	avrSpeed[Rain] = 80;	// km / h
	avrSpeed[Sunny] = 180; // km / h
	avrSpeed[Snow] = 70; // km / h
}
void BMW::printName()
{
	std::cout << "BMW: ";
}
const float BMW::speedBasedOnWeather(Weather w)
{
	return avrSpeed[w];
}