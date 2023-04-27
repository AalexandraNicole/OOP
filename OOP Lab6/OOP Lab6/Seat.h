#pragma once
#include "Car.h"

class Seat : public Car {
public:
	Seat();
	void printName() override;
	const float speedBasedOnWeather(Weather) override;

};