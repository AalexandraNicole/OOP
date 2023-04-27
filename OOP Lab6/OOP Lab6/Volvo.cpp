#include "Volvo.h"

Volvo::Volvo()
{
	fuelCapacity = 70;	// L
	fuelConsumption = 8;	// L / 100 km 
	avrSpeed[Rain] = 70;	// km / h
	avrSpeed[Sunny] = 110; // km / h
	avrSpeed[Snow] = 40; // km / h
}
void Volvo::printName()
{
	std::cout << "Volvo: ";
}
const float Volvo::speedBasedOnWeather(Weather w)
{
	return avrSpeed[w];
}