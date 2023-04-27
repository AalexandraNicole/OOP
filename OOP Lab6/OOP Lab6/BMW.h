#pragma once
#include "Car.h"

class BMW : public Car {
public:
	BMW();
	void printName() override;
	const float speedBasedOnWeather(Weather) override;
};