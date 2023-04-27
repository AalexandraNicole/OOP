#pragma once
#include "Car.h"


class RangeRover : public Car {
public:
	RangeRover();
	void printName() override;
	const float speedBasedOnWeather(Weather) override;
};