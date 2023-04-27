#include "Fiat.h"

Fiat::Fiat()
{
	fuelCapacity = 50;	// L
	fuelConsumption = 5;	// L / 100 km 
	avrSpeed[Rain] = 61;	// km / h
	avrSpeed[Sunny] = 100; // km / h
	avrSpeed[Snow] = 30; // km / h
}
void Fiat::printName()
{
	std::cout << "Fiat: ";
}
const float Fiat::speedBasedOnWeather(Weather w)
{
	return avrSpeed[w];
}