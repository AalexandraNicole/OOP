#pragma once
#include "Car.h"

class Fiat : public Car {
public:
	Fiat();
	void printName() override;
	const float speedBasedOnWeather(Weather) override;
};