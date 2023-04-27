#pragma once
#include "Weather.h"
#include "BMW.h"
#include "Seat.h"
#include "Volvo.h"
#include "Fiat.h"
#include "RangeRover.h"

using namespace std;

class Circuit {
	int length;
	Car* cars[200];
	int numberOfCars;
	Weather weather;
public:
	Circuit();
	~Circuit();
	void SetLength(const int);
	void SetWeather(const Weather);
	void AddCar(Car*);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};