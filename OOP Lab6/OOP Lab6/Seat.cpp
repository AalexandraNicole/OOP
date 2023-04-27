#include "Seat.h"

Seat::Seat()
{
	fuelCapacity = 50;	// L
	fuelConsumption = 5;	// L / 100 km 
	avrSpeed[Rain] = 50;	// km / h
	avrSpeed[Sunny] = 80; // km / h
	avrSpeed[Snow] = 30; // km / h
}
void Seat::printName()
{
	std::cout << "Seat: ";
}
const float Seat::speedBasedOnWeather(Weather w)
{
	return avrSpeed[w];
}