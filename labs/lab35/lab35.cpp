#include <iostream>

using namespace std;

class TemperatureConverter {
    private:
    double kelvin_;
    
    public:
    
    TemperatureConverter();
    TemperatureConverter(double k);
    
    void SetTempFromKelvin(double k);
    void SetTempFromCelsius(double c);
    void SetTempFromFahrenheit(double f);
    
    double GetTempFromKelvin();
    double GetTempAsCelsius();
    double GetTempAsFahrenheit();
    
    void PrintTemperatures();
};

TemperatureConverter:: TemperatureConverter() {
    kelvin_ = 0;
}

TemperatureConverter:: TemperatureConverter(double k) {
    if (k >= 0) {
        kelvin_ = k;
    }
    else
    {
        kelvin_ = 0;
    }
}

void TemperatureConverter:: SetTempFromKelvin(double k) {
    if (k >= 0) {
        kelvin_ = k;
    }
}

double TemperatureConverter:: GetTempFromKelvin() {
    return kelvin_;
}

void TemperatureConverter:: SetTempFromCelsius(double c) {
    //variable to hold kelvin
    int v = 0;
    v = c + 273.15;
    if (v >= 273.15) {
        kelvin_ = v;
    }
}

double TemperatureConverter:: GetTempAsCelsius() {
    //variable to hold celcius
    int c = 0;
    c = kelvin_ - 273.15;
    return c;
}

void TemperatureConverter:: SetTempFromFahrenheit(double f) {
    //variable to hold kelvin
    int v = 0;
    v = (5 * (f - 32)/9) + 273.15;
    if (v >= - 459.67) {
        kelvin_ = v;
    }
}

double TemperatureConverter:: GetTempAsFahrenheit() {
    //variable to hold farenheit
    int f = 0;
    f = ((kelvin_ * 9)/5 + 32);
    return f;
}

void TemperatureConverter:: PrintTemperatures() {
    cout << "Temperatures:\n Kelvin: " << kelvin_ << endl;
    cout << "Celcius: " << GetTempAsCelsius() << endl;
    cout << "Farenheit: " << GetTempAsFahrenheit() << endl;
}

/*
Output:

Temperatures:
 Kelvin: 0
Celcius: -273
Farenheit: 32
Temperatures:
 Kelvin: 274
Celcius: 0
Farenheit: 525
400.15
Temperatures:
 Kelvin: 400.15
Celcius: 127
Farenheit: 752
31
Temperatures:
 Kelvin: 305
Celcius: 31
Farenheit: 581
523
Temperatures:
 Kelvin: 273
Celcius: 0
Farenheit: 523

*/