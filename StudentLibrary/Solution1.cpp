#include "Solution1.h"
#include <cmath>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
    float result;

    if (_from == TemperatureUnits::CELSIUS) {
        if (_to == TemperatureUnits::FAHRENHEIT) {
            result = (9.0f / 5.0f) * _value + 32.0f;
        }
        else if (_to == TemperatureUnits::KELVIN) {
            result = _value + 273.0f;
        }
    }
    else if (_from == TemperatureUnits::KELVIN) {
        if (_to == TemperatureUnits::FAHRENHEIT) {
            result = (9.0f / 5.0f) * (_value - 273.0f) + 32.0f;
        }
        else if (_to == TemperatureUnits::CELSIUS) {
            result = _value - 273.0f;
        }
    }
    else if (_from == TemperatureUnits::FAHRENHEIT) {
        if (_to == TemperatureUnits::CELSIUS) {
            result = (5.0f / 9.0f) * (_value - 32.0f);
        }
        else if (_to == TemperatureUnits::KELVIN) {
            result = (5.0f / 9.0f) * (_value - 32.0f) + 273.0f;
        }
    }
    return roundf(result * 100) / 100;
}

#endif
