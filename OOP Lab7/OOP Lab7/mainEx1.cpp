#include <iostream>
// Laboratorul 7 Ex 1

float operator "" _Kelvin(const char* x){
    float value = strtof(x, nullptr);
    return value + 273.15;
};
float operator "" _Fahrenheit(const char* y) {
    float value = strtof(y ,nullptr);
    return (value * (1.8)) + 32;
}
int main1() {
    float a = 300_Kelvin;

    float b = 120_Fahrenheit;

    std::cout << a << " " << b;
    return 0;
}