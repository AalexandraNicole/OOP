#pragma once
#include "Car.h"

class Volvo : public Car {
public:
	Volvo();
	void printName() override;
	const float speedBasedOnWeather(Weather) override;
};