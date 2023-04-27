#include "Circuit.h"


Circuit::Circuit() {
	numberOfCars = 0;
	length = 0;
	weather = Sunny;
	memset(cars, 0, 1);
};
Circuit::~Circuit() {
	for (int i = 0; i < numberOfCars; i++)
		delete cars[i];
};
void Circuit::SetLength(const int Lungime_Circuit) {
	length = Lungime_Circuit;
}
void Circuit::SetWeather(const Weather vreme) {
	weather = vreme;
};
void Circuit::AddCar(Car* masina) {
	cars[numberOfCars] = masina;
	numberOfCars++;
};
void Circuit::Race() {
	for (int i = 0; i < numberOfCars; i++)
		if (cars[i]->speedBasedOnWeather(weather) * (cars[i]->fuelCapacity / cars[i]->fuelConsumption) >= length)	// the maximum distance is greater than the length of the circuit
			cars[i]->time = length / cars[i]->speedBasedOnWeather(weather);	// store time
		else
			cars[i]->time = -1.0f;	// mark as unfinished
};
void Circuit::ShowFinalRanks() {
	Car* aux;
	bool ok;

	do
	{
		ok = true;
		for (int i = 0; i < numberOfCars - 1; i++)
			if (cars[i]->time > cars[i + 1]->time)
			{
				aux = cars[i];
				cars[i] = cars[i + 1];
				cars[i + 1] = aux;
				ok = false;
			}
	} while (!ok);

	std::cout << "FINAL RANKS: " << std::endl;
	for (int i = 0; i < numberOfCars; i++)
		if (cars[i]->time != -1.0f)
		{
			cars[i]->printName();
			std::cout << cars[i]->time << " hours" << std::endl;
		}
	std::cout << std::endl;
};
void Circuit::ShowWhoDidNotFinish() {

};