#ifndef TEMPERATURECONVERTER_HPP
#define TEMPERATURECONVERTER_HPP

#include "unitconverter.hpp"

class TemperatureConverter : public UnitConverter{

  public:
    TemperatureConverter();
    virtual double convert(double input) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;

};

#endif
